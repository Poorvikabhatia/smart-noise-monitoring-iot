#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

// Pin connections
#define SOUND_PIN A0
#define LED_PIN D5
#define BUZZER_PIN D6

// Threshold value
int threshold = 37;

// To avoid repeated notifications
bool alertSent = false;

BlynkTimer timer;

void checkNoise() {
  int noiseValue = analogRead(SOUND_PIN);

  Serial.print("Noise Value: ");
  Serial.println(noiseValue);

  // Send value to Blynk gauge widget (V0)
  Blynk.virtualWrite(V0, noiseValue);

  if (noiseValue > threshold) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    // Optional Blynk LED widget (V1)
    Blynk.virtualWrite(V1, 255);

    // Send only one notification
    if (!alertSent) {
      Blynk.logEvent("noise_alert", "⚠️ High noise detected! Please maintain silence.");
      alertSent = true;
    }

    delay(1000);   // beep for 1 second
    digitalWrite(BUZZER_PIN, LOW);

  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    // Turn OFF app LED widget
    Blynk.virtualWrite(V1, 0);

    alertSent = false;
  }
}

void setup() {
  Serial.begin(57600);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  // Check noise every 1 second
  timer.setInterval(1000L, checkNoise);
}

void loop() {
  Blynk.run();
  timer.run();
}

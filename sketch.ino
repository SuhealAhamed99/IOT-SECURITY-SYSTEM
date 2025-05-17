#define BLYNK_TEMPLATE_ID "TMPL3Iu3IQM5N"
#define BLYNK_TEMPLATE_NAME "IOT Security system Task 3"
#define BLYNK_AUTH_TOKEN "bNS7g-vCqIuS6E8xOasbRmr_EYJZSQ1D"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// WiFi credentials
char ssid[] = "Wokwi-GUEST";
char password[] = "";

// Pin definitions
#define PIR_PIN     14  // PIR sensor input
#define BUZZER_PIN  15  // Buzzer output
#define LED_PIN     2   // Physical LED

bool motionDetected = false;

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);
  Serial.println("IoT Security System Initialized");
}

void loop() {
  Blynk.run();

  int pirState = digitalRead(PIR_PIN);

  if (pirState == HIGH && !motionDetected) {
    motionDetected = true;

    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);

    Serial.println("⚠️ Motion Detected!");

    // Update Blynk dashboard
    Blynk.logEvent("motion_alert", "⚠️ Motion Detected in Secured Area!");
    Blynk.virtualWrite(V2, 255); // Turn ON virtual LED (full brightness)
  }

  if (pirState == LOW && motionDetected) {
    motionDetected = false;

    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);

    Serial.println("✅ Motion Ended");

    // Update Blynk dashboard
   
    Blynk.virtualWrite(V2, 0); // Turn OFF virtual LED
  }

  delay(100); // Small debounce delay
}

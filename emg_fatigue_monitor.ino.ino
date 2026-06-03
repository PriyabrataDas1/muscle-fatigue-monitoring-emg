const int EMG_PIN = A2; // EMG sensor connected to A2
const int BUZZER_PIN = 8; // Passive buzzer connected to D8
const int EMG_THRESHOLD = 13; // Threshold for muscle activation

bool isMonitoring = true;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(9600);

  Serial.println("EMG Sensor + Buzzer System Ready");
  Serial.println("Press 'd' to STOP monitoring, 'f' to START monitoring.");
}

void loop() {

  if (Serial.available() > 0) {

    char command = Serial.read();

    if (command == 'd') {
      isMonitoring = false;
      Serial.println(">> Monitoring DISABLED.");
    }
    else if (command == 'f') {
      isMonitoring = true;
      Serial.println(">> Monitoring ENABLED.");
    }
  }

  if (isMonitoring) {

    int emgValue = analogRead(EMG_PIN);

    int diff = emgValue - EMG_THRESHOLD;

    Serial.print("EMG: ");
    Serial.print(emgValue);

    if (emgValue > EMG_THRESHOLD) {

      Serial.print(" | Status: ACTIVE");

      if (diff > 3) {

        Serial.print(" | Color: RED");

        digitalWrite(BUZZER_PIN, HIGH);
        delay(200);
        digitalWrite(BUZZER_PIN, LOW);

      } else {

        Serial.print(" | Color: ORANGE");
      }

    } else {

      Serial.print(" | Status: REST | Color: GREEN");
    }

    Serial.println();

  } else {

    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(100);
}
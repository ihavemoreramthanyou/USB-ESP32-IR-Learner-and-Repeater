// This is placeholder code, real code coming soon!
// ESP32-S3 USB IR Learner / Repeater

constexpr int IR_RX_PIN = 4;
constexpr int IR_TX_PIN = 5;

void setup() {
  pinMode(IR_RX_PIN, INPUT);
  pinMode(IR_TX_PIN, OUTPUT);

  // Keep IR transmitter off until explicitly used
  digitalWrite(IR_TX_PIN, LOW);

  Serial.begin(115200);

  delay(500);

  Serial.println();
  Serial.println("Aperture Science Remote Infrared Testing Device V1.0");
  Serial.println("ESP32-S3 initialized");
  Serial.println("IR receiver: GPIO4");
  Serial.println("IR transmitter: GPIO5");
}

void loop() {
  // For now, expose the raw demodulated IR receiver state.
  // Actual IR protocol decoding/repeating will be added later.

  static int previousState = HIGH;

  int state = digitalRead(IR_RX_PIN);

  if (state != previousState) {
    Serial.print("IR_RX: ");
    Serial.println(state);
    previousState = state;
  }

  delayMicroseconds(100);
}

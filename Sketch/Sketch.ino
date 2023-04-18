const int buttonPin = 2; // Pin connected to the switch
const int key = 'a'; // Key to send when switch is pressed

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  static bool buttonState = true; // Current state of the button
  bool newButtonState = digitalRead(buttonPin) == LOW; // Read the button state

  // If the button state has changed, wait for switch to settle and send key
  if (newButtonState != buttonState) {
    delay(50); // Wait for switch to settle
    if (newButtonState) {
      Serial.write(key);
      Serial.flush();
    }
    buttonState = newButtonState;
  }
}

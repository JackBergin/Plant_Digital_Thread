// Potentiometer is connected to GPIO 34 (Analog ADC1_CH6) 
const int tempsense = 34;

// variable for storing the potentiometer value
int potValue = 0;
int i = 0;
void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.print("Setup Finised");
}

void loop() {
  Serial.print("Loop: " + i);

  // Reading potentiometer value
  potValue = analogRead(tempsense);
  Serial.println(potValue);
  delay(500);
  i++;
}

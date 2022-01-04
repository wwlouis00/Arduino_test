void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  Serial.begin(115200);
  for(int i =1;i<10;i++)
  {
    Serial.println(i);
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);
    if (i > 5){
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(100);
    }
  }
  // put your main code here, to run repeatedly:

}

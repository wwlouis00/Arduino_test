void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int i = 4;
  if (i >10){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);  
  }
  else{
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(100);  
  }
  // put your main code here, to run repeatedly:

}

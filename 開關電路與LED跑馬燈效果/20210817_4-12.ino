const byte LED =13;
const byte SW = 2;
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(SW, INPUT);
}

void loop() {
  boolean val = digitalRead(SW); /*讀取開關數值*/
  if (val)  /*如果打開是高電位*/
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}

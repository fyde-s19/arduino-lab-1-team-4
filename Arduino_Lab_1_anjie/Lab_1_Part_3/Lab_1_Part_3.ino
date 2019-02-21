void setup() {
  // put your setup code here, to run once:
  //LED initialize
  pinMode(LED_BUILTIN, OUTPUT);
  
}
void timeBlink(int interval) {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval*1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
void loop() {
  // put your main code here, to run repeatedly:
  timeBlink (1);
  timeBlink (2);
  timeBlink (3);
  
}

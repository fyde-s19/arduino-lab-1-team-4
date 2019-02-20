void setup() {
  // put your setup code here, to run once:

}
void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000/freq; //delay is in ms
  onTime = period * duty/100; 
  offTime = period - onTime;  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
  }
void loop() {
  // put your main code here, to run repeatedly:

}

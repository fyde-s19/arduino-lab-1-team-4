void setup() {
  // put your setup code here, to run once:
 // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}


void dimmer(int freq, int duty){
  int period, onTime, offTime;
  period = 1000/freq; //delay() in milliseconds
  onTime = period * duty/100; //how to pretend duty is a fraction
  offTime = period - onTime; //all time is accounted for (none lost to rounding)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW); 
  delay(offTime);

}

void loop() {
  // put your main code here, to run repeatedly:
  int i=0;
  while (i>100){
        dimmer(100, i);
        i++;
      }
    while (i<0){
        dimmer(100, i);
        i--;
      }

}

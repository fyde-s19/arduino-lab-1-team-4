void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  int Hz=100;
  period = 1000/freq;     //delay is in ms
  onTime = period * duty/Hz; 
  offTime = period - onTime;  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
  Hz = Hz - 10;
  }

void loop() {
  // put your main code here, to run repeatedly:
  int i=0;
  int j=100;
  while (j>0){
    for (i=1; i<=100; i++) {
        dimmer(j, i);
      }
    for (;i>=0;i--) {
        dimmer(100, i);
      }
    j = j-10;
   }
}

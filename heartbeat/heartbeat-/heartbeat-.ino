/* Robert Vitali, Lingbo Li, Thomas wasynczuk
 * January 17th, 2018
 */

void setup() {
  Serial.begin(9600);
  //pinMode(13, OUTPUT);
}

void loop() {
  
  delay(1000);
  int sec = millis()/1000;
  Serial.print(sec);
  Serial.println(" sec have elapsed");
  /*digitalWrite(13, HIGH);   
  delay(1000);                 
  digitalWrite(13, LOW);       
  delay(1000);*/                  
}

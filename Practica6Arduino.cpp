int pin1 = 2;
void setup() 
{
pinMode(pin1,INPUT);

Serial.begin(9600);

}
void loop() {
if(pin1 == HIGH){
  Serial.write(1);
}
else{
  Serial.write(0);

delay(1000);
}

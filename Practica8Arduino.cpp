int buttonPin = 13;
int ledPin = 7;
int ledPin2 = 6;
int ledPin3 =5;
int buttonState = 0;
long distancia;
long tiempo;
void setup(){
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(8,INPUT);
  pinMode(buttonPin, INPUT);
  
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
}
void loop(){
  digitalWrite(9,LOW);
  delayMicroseconds(5);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  tiempo = pulseIn(8,HIGH);
  distancia=int(0.017*tiempo);
  Serial.println("Distancia");
  Serial.println(distancia);
  Serial.println("cm");
  buttonState = digitalRead(buttonPin);
  if(buttonState==HIGH){
  if(distancia<10){
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
  else if(distancia<20){
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
  }
  else{
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin3, LOW);
  }
  }
  else{
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
  delay (10);
}

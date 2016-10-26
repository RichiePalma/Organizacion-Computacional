int buttonPin = 13;
int buttonPin2 = 12;
int buttonPin3 = 11;
//int ledPin = 7; //La variable de LEDs fue usado para el testing de los push buttons
//int ledPin2 = 6;
//int ledPin3 =5;

int buttonState = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup(){
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
}

void loop(){
  buttonState = digitalRead(buttonPin);
  buttonState2= digitalRead(buttonPin2);
  buttonState3= digitalRead(buttonPin3);
  
  if(buttonState==HIGH){
    //digitalWrite(ledPin, HIGH);
    Serial.write(1);
  }
  else{
    //digitalWrite(ledPin, LOW);
    Serial.write(0);
  }
  if(buttonState2==HIGH){
    //digitalWrite(ledPin2, HIGH);
    Serial.write(1);
  }
  else{
    //digitalWrite(ledPin2, LOW);
    Serial.write(0);
  }
  
  if(buttonState3==HIGH){
    //digitalWrite(ledPin3, HIGH);
    Serial.write(1);
  }
   else{
    //digitalWrite(ledPin3, LOW);
    Serial.write(0);
  }
  
}

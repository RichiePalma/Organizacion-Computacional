//ledPin and its variations will be the pins on the Arduino that correspond to a LED
int ledPin = 13;  
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
int ledPin5 = 9;
int ledPin6 = 8;
int buttonPin = 7;  //Push button pin
int buttonState = 0;   //Variable declaration so it can later be used
  
int cont=0;
int pressurePin = A0;
int force;
double fcount;
double timer;
   void setup(){ 
   pinMode(buttonPin, INPUT);  //Push button
   pinMode(ledPin, OUTPUT); // Pins will be the OUTPUT depending on the Input of the push button
   pinMode(ledPin2, OUTPUT); 
   pinMode(ledPin3, OUTPUT);
   pinMode(ledPin4, OUTPUT);
   pinMode(ledPin5, OUTPUT);
   pinMode(ledPin6, OUTPUT);
   Serial.begin(9600);       //Begin serial communication
} 
void loop(){
  force = analogRead(pressurePin);       //Reads the force sensed by the FSR Sensor
  Serial.println(force);               //Print value in order to know the force applied
  if(force>200){ 
    fcount=20;
  }
  else if(force>200){
    fcount=20;
  }
  else if(force>200){
    fcount=20;
  }
  else if(force>200){
    fcount=20;
  }
  else if(force>200){
    fcount=20;
  }
  else{
    fcount=20;
  }
  
  buttonState = digitalRead(buttonPin);  //Reads if button is either Hight (Being pressed) or LOW (Unpressed)
    if(buttonState == HIGH){ //Checa si el boton es presionado
      delay(1000);
      cont+=1;
      timer=fcount/6;
      
      if(cont >= timer){
        digitalWrite(ledPin, HIGH);  // Enciende el LED
      }
      if(cont >= (2*timer)){
        digitalWrite(ledPin2, HIGH); // Enciende el LED
      }
      if(cont >= (3*timer)){
        digitalWrite(ledPin3, HIGH); // Enciende el LED
      }
      if(cont >= (4*timer)){
        digitalWrite(ledPin4, HIGH); // Enciende el LED
      }
      if(cont >= (5*timer)){
        digitalWrite(ledPin5, HIGH); // Enciende el LED
      }
      if(cont >= (6*timer)){
        digitalWrite(ledPin6, HIGH); // Enciende el LED 
      }
    }
    else{
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      digitalWrite(ledPin6, LOW);
      cont=0;
    
   }
}

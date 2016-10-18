int ledPin = 13;     // LED que se encuentra en el pin 13
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
int ledPin5 = 9;
int ledPin6 = 8;
int buttonPin = 7;  //Push button pin
int buttonState = 0;   
  
int cont=0;
   void setup(){ 
   pinMode(buttonPin, INPUT); //Push button
   pinMode(ledPin, OUTPUT); // El p1n 13 será una salida digital
   pinMode(ledPin2, OUTPUT);
   pinMode(ledPin3, OUTPUT);
   pinMode(ledPin4, OUTPUT);
   pinMode(ledPin5, OUTPUT);
   pinMode(ledPin6, OUTPUT);

} 
void loop(){
  buttonState = digitalRead(buttonPin);  //Checa si se presiona
    if(buttonState == HIGH){ //Checa si el boton es presionado
      delay(1000);
      cont+=1;
      if(cont == 1){
        digitalWrite(ledPin, HIGH);  // Enciende el LED
      }
      if(cont == 3){
        digitalWrite(ledPin2, HIGH); // Enciende el LED
      }
      if(cont == 5){
        digitalWrite(ledPin3, HIGH); // Enciende el LED
      }
      if(cont == 7){
        digitalWrite(ledPin4, HIGH); // Enciende el LED
      }
      if(cont == 9){
        digitalWrite(ledPin5, HIGH); // Enciende el LED
      }
      if(cont == 11){
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

int pushButton = 13;
int buttonState = 0;

int red = 2;
int blue = 3;
int green = 4;




void setup() {
  pinMode(pushButton, INPUT);


  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  buttonState = digitalRead(pushButton);


  if(buttonState==HIGH){
    //GREEN
    analogWrite(red,255);
    analogWrite(green,0);
    analogWrite(blue,255);
  }

  else{
    //RED
    analogWrite(red,0);
    analogWrite(green,255);
    analogWrite(blue,255);
    delay(500);

   //BLUE
    analogWrite(red,255);
    analogWrite(green,255);
    analogWrite(blue,0);
    delay(500);
  }
  
  

}

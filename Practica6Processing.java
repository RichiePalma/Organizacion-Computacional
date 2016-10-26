import processing.serial.*;
import cc.arduino.*;
Serial myPort;
int pin1;
int red = 0;
int green = 0;
int blue = 0;
void setup() {
  String portName = Serial.list()[0]; 
myPort = new Serial(this, portName, 9600); 
}

void draw()
{
  if ( myPort.available() > 0) 
  {  
   pin1 = myPort.read();
     if(pin1 == 1){
    red = 255;
  }
  else{
   red = 0; 
  System.out.println(red); //+" " +green+" "+blue
  } 

  fill(red); //fill(red,green,blue);
  rect(10,10,100,100);
}

import processing.serial.*;
import cc.arduino.*;
Arduino arduino; 
String p1="Hola",
       p2="Práctica 8",
       p3="Saludos",
       p4="Error";
int sP1 = 2;
int sP2 = 3;
int sP3 = 4;
color red,
      blue,
      green,
      white;
void setup() { 
size(800, 800);
arduino = new Arduino(this, "COM7", 9600); 
arduino.pinMode(sP1,Arduino.INPUT);
arduino.pinMode(sP2,Arduino.INPUT);
arduino.pinMode(sP3,Arduino.INPUT);
red=color (255,0,0);
blue= color (#ef8700);
green = color (180,255,140);
white= color (255);
}
void draw() { 
background(red); 
fill(255,0,127);
rect(50,50,750,350);
fill(255,0,127);
rect(50,400,750,350);
if(arduino.digitalRead(sP1)==Arduino.HIGH && arduino.digitalRead(sP2)==Arduino.LOW && arduino.digitalRead(sP3)==Arduino.LOW) {
  fill(255,0,0);
  ellipse(350,400,150,150);
  textSize(35);
  text(p1,300,450);
}
  
      else if(arduino.digitalRead(sP2)==Arduino.HIGH && arduino.digitalRead(sP1)==Arduino.LOW && arduino.digitalRead(sP3)==Arduino.LOW) {
        fill(red);
        rect(270,125,100,100);
        textSize(35);
        text(p2,300,450);
      }
          else if(arduino.digitalRead(sP3)==Arduino.HIGH && arduino.digitalRead(sP1)==Arduino.LOW && arduino.digitalRead(sP2)==Arduino.LOW) {
            fill(blue);
            triangle(350,150,300,200,400,200);
            textSize(35);
            text(p3,300,450);
          }
          
          else if((arduino.digitalRead(sP1)==Arduino.HIGH && arduino.digitalRead(sP2)==Arduino.HIGH) || (arduino.digitalRead(sP1)==Arduino.HIGH && arduino.digitalRead(sP3)==Arduino.HIGH) || (arduino.digitalRead(sP2)==Arduino.HIGH && arduino.digitalRead(sP3)==Arduino.HIGH) || (arduino.digitalRead(sP1)==Arduino.HIGH && arduino.digitalRead(sP2)==Arduino.HIGH && arduino.digitalRead(sP3)==Arduino.HIGH)){ 
            fill(0,0,0); 
            rect(50,50,540,250);
            fill(0,0,0);
            rect(50,350,540,150);
            
            fill(green);
            textSize(35);
            text(p4,300,450);
          }
}

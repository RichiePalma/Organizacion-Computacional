// Pin donde se conectan los leds
int pinLed1 = 2;
int pinLed2 = 3;
// Pin analogico de entrada para el LDR
int pinLDR = A8;
 
// Variable donde se almacena el valor del LDR
int valorLDR = 0;  
int ledPin2 = 12;
long distancia;
long tiempo;
 
void setup()
{
  // Configuramos como salidas los pines donde se conectan los led
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  
  //  Configurar el puerto serial
  Serial.begin(9600);
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(8,INPUT);
  
  pinMode(ledPin2, OUTPUT);
}
 
void loop()
{
  // Apagar todos los leds siempre que se inicia el ciclo
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
 
  // Guardamos el valor leido del ADC en una variable
  // El valor leido por el ADC (voltaje) aumenta de manera directamente proporcional
  // con respecto a la luz percibida por el LDR
  valorLDR= analogRead(pinLDR);
  
  // Devolver el valor leido a nuestro monitor serial en el IDE de Arduino
  Serial.println(valorLDR);
 
  // Encender los leds apropiados de acuerdo al valor de ADC
  if(valorLDR > 50)
  {
    digitalWrite(pinLed1, HIGH);
  }
  if(valorLDR > 100)
  {
    digitalWrite(pinLed2, HIGH);
  }
  // Esperar unos milisegundos antes de actualizar
  delay(200);
  digitalWrite(9,LOW);
  delayMicroseconds(5);
  digitalWrite(9,HIGH);
  delayMicroseconds(10);
  tiempo = pulseIn(8,HIGH);
  distancia=int(0.017*tiempo);
  Serial.println("Distancia");
  Serial.println(distancia);
  Serial.println("cm");
  if(distancia<10){
    digitalWrite(ledPin2, HIGH);
  }
  else if(distancia>=10){
    digitalWrite(ledPin2, LOW);
  }
  delay (10);
}

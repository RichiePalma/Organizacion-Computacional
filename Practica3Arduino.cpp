void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
}
void loop() {
  

 int a=digitalRead(2)+digitalRead(5);
 int b=digitalRead(3)+digitalRead(6);
 int c=digitalRead(4)+digitalRead(7);

  
   
  int S0=0; 
  int S1=0;
  int S2=0;
  int c1=0; 
  int c2=0;
  int c3=0;
  
  switch (a){ 
    case (0):
      S0=0;
      c1=0;
      break;
    
    case (1):
      S0=1;
      c1=0;
      break;
  
    case (2):
      S0=0;
      c1=1;
      break;
  }  
  
  switch (b+c1){ 
    case (0):
      S1=0;
      c2=0;
      break;
    
    case (1):
      S1=1;
      c2=0;
      break;
    
    case (2):
      S1=0;
      c2=1;
      break;
    
    case (3):
      S1=1;
      c2=1;
      break;
  }
  
  switch (c+c2){
    case (0):
      S2=0;
      c3=0;
      break;
    
    case (1):
      S2=1;
      c3=0;
      break;
    
    case (2):
      S2=0;
      c3=1;
      break;
    
    case (3):
      S2=1;
      c3=1;
      break;
  }    
   
 if (S0==0){digitalWrite(11, LOW);}
 else{digitalWrite(11, HIGH);}
 if (S1==0){digitalWrite(10, LOW);}
 else{digitalWrite(10, HIGH);}
 if (S2==0){digitalWrite(9, LOW);}
 else{digitalWrite(9, HIGH);}
 if (c3==0){digitalWrite(8, LOW);}
 else{digitalWrite(8, HIGH);}
 

}

/*
 * Arduino Starter Kit - Progetto 2
 * Interfaccia per astronave
 * @author ludovicobesana
*/

int switchstate = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchstate = digitalRead(2);
  
  if (switchstate == LOW) {
    digitalWrite(4, HIGH);  
    digitalWrite(5, LOW);  
    digitalWrite(3, LOW); 
  }

  else {
    digitalWrite(4, LOW);  
    digitalWrite(5, HIGH); 
    delay(250);
    digitalWrite(4, HIGH); 
    digitalWrite(5, LOW);  
    delay(250);
    digitalWrite(4, LOW);  
    digitalWrite(5, HIGH); 
    delay(250);
    digitalWrite(4, HIGH); 
    digitalWrite(5, LOW);  
    delay(250);
    digitalWrite(4, LOW);  
    digitalWrite(5, HIGH); 
    delay(250);
    digitalWrite(4, HIGH); 
    digitalWrite(5, LOW);  
    delay(250);
    digitalWrite(4, LOW);  
    digitalWrite(5, HIGH); 
    delay(250);
    digitalWrite(4, HIGH); 
    digitalWrite(5, LOW); 
    delay(250);
    digitalWrite(4, LOW); 
    delay(1000);
    digitalWrite(3, HIGH); 
    delay(250);
    digitalWrite(3, LOW);   
    delay(500);
  }
}

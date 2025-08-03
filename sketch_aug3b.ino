#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11

void right() {
  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);
  digitalWrite(IN1, HIGH);   
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);  
  digitalWrite(IN4, LOW);
  Serial.println("Forward");
}

void left() {
  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);
  digitalWrite(IN1, LOW);    
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);    
  digitalWrite(IN4, HIGH);

}

void forward() {
  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);
  digitalWrite(IN1, LOW);   
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);  
  digitalWrite(IN4, LOW);

}

void back() {
  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);
  digitalWrite(IN1, HIGH);   
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);    
  digitalWrite(IN4, HIGH);

}

void stopMotors() {
  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  Serial.println("Stop");
}

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  stopMotors();
}

void loop() {
  back();
  delay(800);
  forward();
  delay(800);
  right();
  delay(450);
  forward();
  delay(800);
  left();
  delay(500);
  forward();
  delay(800);
  stopMotors();
  delay(10000);
}
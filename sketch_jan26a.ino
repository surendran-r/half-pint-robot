
int currentPin;

#define REVERSE 0
#define FORWARD 1

#define FRONT 0
#define BACK 1

#define LEFT 0
#define RIGHT 1

int pins[2][2][2];

int count = 0;

void setup() {
  // put your setup code here, to run once:
  pins[FRONT][RIGHT][FORWARD] = 5;
  pins[FRONT][RIGHT][REVERSE] = 6;

  pins[FRONT][LEFT][FORWARD] = 3;
  pins[FRONT][LEFT][REVERSE] = 4;

  pins[BACK][RIGHT][FORWARD] = 11;
  pins[BACK][RIGHT][REVERSE] = 12;

  pins[BACK][LEFT][FORWARD] = 9;
  pins[BACK][LEFT][REVERSE] = 10;
}

void driveFront() {
  
}

void driveBack() {
  
}

void turnRight() {
  
}

void turnLeft() {
  
}

void loop() {
  // put your main code here, to run repeatedly:
  currentPin = 3;
  if(count < 3) {
    digitalWrite(currentPin, HIGH);   
    digitalWrite(currentPin + 1, LOW); 
    delay(1000 * 5);
    count = count + 1;
    digitalWrite(currentPin, LOW);   
    digitalWrite(currentPin + 1, LOW); 
  }
}

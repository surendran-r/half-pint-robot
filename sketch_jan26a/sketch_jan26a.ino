
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
  digitalWrite(pins[FRONT][LEFT][REVERSE], LOW);
  digitalWrite(pins[FRONT][RIGHT][REVERSE], LOW);
  digitalWrite(pins[BACK][LEFT][REVERSE], LOW);
  digitalWrite(pins[BACK][RIGHT][REVERSE], LOW);

  digitalWrite(pins[FRONT][LEFT][FORWARD], HIGH);
  digitalWrite(pins[FRONT][RIGHT][FORWARD], HIGH);
  digitalWrite(pins[BACK][LEFT][FORWARD], LOW);
  digitalWrite(pins[BACK][RIGHT][FORWARD], LOW);
}

void driveBack() {
  digitalWrite(pins[FRONT][LEFT][FORWARD], LOW);
  digitalWrite(pins[FRONT][RIGHT][FORWARD], LOW);
  digitalWrite(pins[BACK][LEFT][FORWARD], LOW);
  digitalWrite(pins[BACK][RIGHT][FORWARD], LOW);

  digitalWrite(pins[FRONT][LEFT][REVERSE], HIGH);
  digitalWrite(pins[FRONT][RIGHT][REVERSE], HIGH);
  digitalWrite(pins[BACK][LEFT][REVERSE], HIGH);
  digitalWrite(pins[BACK][RIGHT][REVERSE], HIGH);
}

void turnRight() {
  
}

void turnLeft() {
  digitalWrite(pins[FRONT][LEFT][REVERSE], LOW);
  digitalWrite(pins[FRONT][RIGHT][FORWARD], LOW);
  digitalWrite(pins[BACK][LEFT][REVERSE], LOW);
  digitalWrite(pins[BACK][RIGHT][FORWARD], LOW);
  
  digitalWrite(pins[FRONT][LEFT][FORWARD], HIGH);
  digitalWrite(pins[FRONT][RIGHT][REVERSE], HIGH);
  digitalWrite(pins[BACK][LEFT][FORWARD], LOW);
  digitalWrite(pins[BACK][RIGHT][REVERSE], LOW);
}

void stop() {
  digitalWrite(pins[FRONT][LEFT][FORWARD], LOW);
  digitalWrite(pins[FRONT][RIGHT][FORWARD], LOW);
  digitalWrite(pins[BACK][LEFT][FORWARD], LOW);
  digitalWrite(pins[BACK][RIGHT][FORWARD], LOW);

  digitalWrite(pins[FRONT][LEFT][REVERSE], LOW);
  digitalWrite(pins[FRONT][RIGHT][REVERSE], LOW);
  digitalWrite(pins[BACK][LEFT][REVERSE], LOW);
  digitalWrite(pins[BACK][RIGHT][REVERSE], LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (count == 0) {
    turnLeft();
    delay(1000*10);
    /*
    driveBack();
    delay(1000*1);
    stop();
    delay(100);
    turnLeft();
    delay(1000*10);
    */
  }
}

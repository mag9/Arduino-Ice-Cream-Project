int firstMotorRight = 10;
int firstMotorLeft = 11;
int secondMotorRight = 12;
int secondMotorLeft = 13;

int switch1 = 4;
int switch2 = 5;
int switch3 = 6;
int switch4 = 7;

int switchState1 = 0;
int switchState2 = 1;
int switchState3 = 2;
int switchState4 = 3;

void setup() {
  pinMode(firstMotorRight, OUTPUT);
  pinMode(firstMotorLeft, OUTPUT);
  pinMode(secondMotorRight, OUTPUT);
  pinMode(secondMotorLeft, OUTPUT);

  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  pinMode(switch3, INPUT);
  pinMode(switch4, INPUT);
}

void loop() {
  switchState1 = digitalRead(switch1);
  switchState2 = digitalRead(switch2);
  switchState3 = digitalRead(switch3);
  switchState4 = digitalRead(switch4);

  switchMove();
}

void switchMove(){
  if(switchState1 == HIGH){ //First Motor Right
    digitalWrite(firstMotorRight, HIGH);
    delay(500);
    digitalWrite(firstMotorRight, LOW);
    delay(500);
    digitalWrite(firstMotorLeft, HIGH);
    delay(500);
    digitalWrite(firstMotorLeft, LOW);
    delay(500);
  } 
  else if (switchState2 == HIGH){ //First Motor Left
    digitalWrite(firstMotorLeft, HIGH);
    delay(500);
    digitalWrite(firstMotorLeft, LOW);
    delay(500);
    digitalWrite(firstMotorRight, HIGH);
    delay(500);
    digitalWrite(firstMotorRight, LOW);
    delay(500);
  } 
  else if (switchState3 == HIGH) { //Second Motor Right
    digitalWrite(secondMotorRight, HIGH);
    delay(500);
    digitalWrite(secondMotorRight, LOW);
    delay(500);
    digitalWrite(secondMotorLeft, HIGH);
    delay(500);
    digitalWrite(secondMotorLeft, LOW);
    delay(500);
  } 
  else if (switchState4 == HIGH) { //Second Motor Left
    digitalWrite(secondMotorLeft, HIGH);
    delay(500);
    digitalWrite(secondMotorLeft, LOW);
    delay(500);
    digitalWrite(secondMotorRight, HIGH);
    delay(500);
    digitalWrite(secondMotorRight, LOW);
    delay(500);
  }
}


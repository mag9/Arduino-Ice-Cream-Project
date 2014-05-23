/*
  All code written by Jeremy Stark
*/

const int limitSwitch1 = 1;
const int limitSwitch2 = 2;

const int finButton = 3;

const int firstMotorRight = 10;
const int firstMotorLeft = 11;
const int secondMotorRight = 12;
const int secondMotorLeft = 13;

/*directionSide*/
const int uiSwitch1 = 4; //leftLeft
const int uiSwitch2 = 5; //rightLeft
const int uiSwitch3 = 6; //rightRight
const int uiSwitch4 = 7; //leftRight


void setup(){
  pinMode(firstMotorRight, OUTPUT);
  pinMode(firstMotorLeft, OUTPUT);
  pinMode(secondMotorRight, OUTPUT);
  pinMode(secondMotorLeft, OUTPUT);

  pinMode(limitSwitch1, INPUT);
  pinMode(limitSwitch2, INPUT);

  pinMode(uiSwitch1, INPUT);
  pinMode(uiSwitch2, INPUT);
  pinMode(uiSwitch3, INPUT);
  pinMode(uiSwitch4, INPUT);

}

void loop(){

  /*Button Controller*/

  /*First Tower*/
  //This stops the motor when it hits the limit switch on the way back.
  if(limitSwitch1 == HIGH && firstMotorRight == HIGH){
    limitCheck();
  }
  if(limitSwitch1 == HIGH && firstMotorLeft == HIGH){
    limitCheck();
  }

  /*Second Tower*/
  //This stops the motor when it hits the limit switch on the way back.
  if(limitSwitch2 == HIGH && secondMotorRight == HIGH){
    limitCheck();
  }
  if(limitSwitch2 == HIGH && secondMotorLeft == HIGH){
    limitCheck();
  }

}

void button(){
  if(finButton == HIGH){
    switchCheck();
  }
}

void switchCheck(){
  //Single Switches
  if(uiSwitch1 == HIGH){
    //Direction  
    pinMode(firstMotorLeft, HIGH);
    delay(1000);
    pinMode(FirstMotorLeft, LOW);
    delay(1000);
    pinMode(firstMotorRight, HIGH);
    //Limit Check
    limitCheck();
  }
  if(uiSwitch2 == HIGH){
    //Direction  
    pinMode(firstMotorRight, HIGH);
    delay(1000);
    pinMode(firstMotorRight, LOW);
    delay(1000);
    pinMode(firstMotorLeft, HIGH);
    //Limit Check
    limitCheck();   
  }
  if(uiSwitch3 == HIGH){
    //Direction  
    pinMode(secondMotorRight, HIGH);
    delay(1000);
    pinMode(secondMotorRight, LOW);
    delay(1000);
    pinMode(secondMotorLeft, HIGH);
    //Limit Check
    limitCheck();
  }
  if(uiSwitch4 == HIGH){
    //Direction  
    pinMode(secondMotorLeft, HIGH);
    delay(1000);
    pinMode(secondMotorLeft, LOW);
    delay(1000);
    pinMode(secondMotorRight, HIGH);
    //Limit Check
    limitCheck(); 
  } 

  //Double Switches
  if(uiSwitch1 == HIGH && uiSwitch2 == HIGH){
      //Direction
      pinMode(firstMotorLeft, HIGH);
      delay(1000);
      pinMode(firstMotorLeft, LOW);
      delay(1000);
      pinMode(firstMotorRight, HIGH);
      delay(1000);
      pinMode(firstMotorRight, LOW);
      delay(1000);
      pinMode(firstMotorLeft, HIGH);
      //Limit Check
      limitCheck()
  }
  if(uiSwitch1 == HIGH && uiSwitch3 == HIGH){
      //Direction
      pinMode(firstMotorLeft, HIGH);
      pinMode(secondMotorRight, HIGH);
      delay(1000);
      delay(1000);
      pinMode(firstMotorLeft, LOW);
      pinMode(secondMotorRight, LOW);
      delay(1000);
      delay(1000);
      pinMode(firstMotorRight, HIGH);
      pinMode(secondMotorLeft, HIGH);
      //Limit Check
      limitCheck();
  }
  if(uiSwitch1 == HIGH && uiSwitch4 == HIGH){
      //Direction
      pinMode(firstMotorLeft, HIGH);
      pinMode(secondMotorLeft, HIGH);
      delay(1000);
      delay(1000);
      pinMode(firstMotorLeft, LOW);
      pinMode(secondMotorLeft, LOW);
      delay(1000);
      delay(1000);
      pinMode(firstMotorRight, HIGH);
      pinMode(secondMotorRight, HIGH);
      //Limit Check
      limitCheck();
  }
  if(uiSwitch2 == HIGH && uiSwitch3 == HIGH){
      //Direction
      pinMode(firstMotorRight, HIGH);
      pinMode(secondMotorRight, HIGH);
      delay(1000);
      delay(1000);
      pinMode(firstMotorRight, LOW);
      pinMode(secondMotorRight, LOW);
      delay(1000);
      delay(1000);
      pinMode(firstMotorLeft, HIGH);
      pinMode(secondMotorLeft, HIGH);
      //Limit Check
      limitCheck();
  }
  if(uiSwitch2 == HIGH && uiSwitch4 == HIGH){
      //Direction
      pinMode(firstMotorRight, HIGH);
      pinMode(secondMotorLeft, HIGH);
      delay(1000);
      delay(1000);
      pinMode(firstMotorRight, LOW);
      pinMode(secondMotorLeft, LOW);
      delay(1000);
      delay(1000);
      pinMode(firstMotorLeft, HIGH);
      pinMode(secondMotorRight, HIGH);
      //Limit Check
      limitCheck();
  }
  if(uiSwitch3 == HIGH && uiSwitch4 == HIGH){
       //Direction
      pinMode(secondMotorLeft, HIGH);
      delay(1000);
      pinMode(secondMotorLeft, LOW);
      delay(1000);
      pinMode(secondMotorRight, HIGH);
      delay(1000);
      pinMode(secondMotorRight, LOW);
      delay(1000);
      pinMode(secondMotorLeft, HIGH);
      //Limit Check
      limitCheck()
  }

  //Triple Switches
  if(uiSwitch1 == HIGH && uiSwitch2 == HIGH && uiSwitch3 == HIGH){
      //Direction
      pinMode(firstMotorLeft, HIGH);
      delay(1000);
      pinMode(firstMotorLeft, LOW);
      delay(1000);
      pinMode(firstMotorRight, HIGH);
      delay(1000);
      pinMode(firstMotorRight, LOW);
      delay(1000);
      pinMode(firstMotorLeft, HIGH);
      limitCheck();
      
      pinMode(secondMotorRight, HIGH);
      delay(1000);
      pinMode(secondMotorRight, LOW);
      delay(1000);
      pinMode(secondMotorLeft, HIGH);
      limitCheck();
  }
  if(uiSwitch1 == HIGH && uiSwitch3 == HIGH && uiSwitch4 == HIGH){
      //Direction
      pinMode(firstMotorLeft, HIGH);
      delay(1000);
      pinMode(firstMotorLeft, LOW);
      delay(1000);
      pinMode(firstMotorRight, HIGH);
      limitCheck();
      
      pinMode(secondMotorRight, HIGH);
      delay(1000);
      pinMode(secondMotorRight, LOW;
      delay(1000);
      pinMode(secondMotorLeft, HIGH);
      delay(1000);
      pinMode(secondMotorLeft, LOW);
      delay(1000);
      pinMode(secondMotorRight, HIGH);
      limitCheck();
  }
  if(uiSwitch1 == HIGH && uiSwitch2 == HIGH && uiSwitch4 == HIGH){
      //Direction
      pinMode(firstMotorLeft, HIGH);
      delay(1000);
      pinMode(firstMotorLeft, LOW);
      delay(1000);
      pinMode(firstMotorRight, HIGH);
      delay(1000);
      pinMode(firstMotorRight, LOW);
      delay(1000);
      pinMode(firstMotorLeft, HIGH);
      limitCheck();
      
      pinMode(secondMotorLeft, HIGH);
      delay(1000);
      pinMode(secondMotorLeft, LOW);
      delay(1000);
      pinMode(secondMotorRight, HIGH);
      limitCheck();
  }
  if(uiSwitch2 == HIGH && uiSwitch3 == HIGH && uiSwitch4 == HIGH){
      //Direction
      pinMode(firstMotorRight, HIGH);
      delay(1000);
      pinMode(firstMotorRight, LOW);
      delay(1000);
      pinMode(firstMotorLeft, HIGH);
      limitCheck();
      
      pinMode(secondMotorRight, HIGH);
      delay(1000);
      pinMode(secondMotorRight, LOW);
      delay(1000);
      pinMode(secondMotorLeft, HIGH);
      delay(1000);
      pinMode(secondMotorLeft, LOW);
      delay(1000);
      pinMode(secondMotorRight, HIGH);
      limitCheck();
  }

  //All Switches 
  if(uiSwitch1 == HIGH && uiSwitch2 == HIGH && uiSwitch3 == HIGH && uiSwitch4 == HIGH){
      //Direction
      pinMode(firstMotorLeft, HIGH);
      delay(1000);
      pinMode(firstMotorLeft, LOW);
      delay(1000);
      pinMode(firstMotorRight, HIGH);
      delay(1000);
      pinMode(firstMotorRight, LOW);
      delay(1000);
      pinMode(firstMotorLeft, HIGH);
      limitCheck();
      
      pinMode(secondMotorRight, HIGH);
      delay(1000);
      pinMode(secondMotorRight, LOW);
      delay(1000);
      pinMode(secondMotorLeft, HIGH);
      delay(1000);
      pinMode(secondMotorLeft, LOW);
      delay(1000);
      pinMode(secondMotorRight, HIGH);
      limitCheck();
  }
}

/*Checks if either of the limit switches have been hit. If so it stops the motor.*/
void limitCheck(){

  //Stops the first motor
  if(limitSwitch1 == HIGH){
    pinMode(firstMotorRight, LOW);
    pinMode(firstMotorLeft, LOW);
  }

  //stops the second motor
  if(limitSwitch2 == HIGH){
    pinMode(secondMotorRight, LOW);
    pinMode(secondMotorLeft, LOW);     
  }
}


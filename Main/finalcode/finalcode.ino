/*
  All code written written by Jeremey Stark
*/

int limitSwitch1 = 1;
int limitSwitch2 = 2;

int finButton = 3;

int firstMotorRight = 10;
int firstMotorLeft = 11;
int secondMotorRight = 12;
int secondMotorLeft = 13;

/*directionSide*/
int uiSwitch1 = 4; //leftLeft
int uiSwitch2 = 5; //rightLeft
int uiSwitch3 = 6; //rightRight
int uiSwitch4 = 7; //leftRight

int led = 8;


void setup(){
  pinMode(firstMotorRight, OUTPUT);
  pinMode(firstMotorLeft, OUTPUT);
  pinMode(secondMotorRight, OUTPUT);
  pinMode(secondMotorLeft, OUTPUT);

  pinMode(limitSwitch1, INPUT);
  pinMode(limitSwitch2, INPUT);
  
  pinMode(led, OUTPUT);

  pinMode(uiSwitch1, INPUT);
  pinMode(uiSwitch2, INPUT);
  pinMode(uiSwitch3, INPUT);
  pinMode(uiSwitch4, INPUT);

}

void loop(){

  /*Button Controller*/
  //button();
  //switchCheck();
  
  digitalWrite(secondMotorRight, HIGH);
  if(limitSwitch1 == HIGH){
  digitalWrite(led, HIGH);
  digitalWrite(secondMotorRight, LOW);
  }
  
  /*First Tower*/
  //This stops the motor when it hits the limit switch on the way back.
  if(limitSwitch1 == HIGH && firstMotorRight == HIGH){
    limitCheck();
  } else if(limitSwitch1 == HIGH && firstMotorLeft == HIGH){
    limitCheck();
  }

  /*Second Tower*/
  //This stops the motor when it hits the limit switch on the way back.
  if(limitSwitch2 == HIGH && secondMotorRight == HIGH){
    limitCheck();
  } else if(limitSwitch2 == HIGH && secondMotorLeft == HIGH){
    limitCheck();
  }

}

void button(){
  if(finButton == HIGH){
    digitalWrite(led, HIGH);
    switchCheck();
  }
}

void switchCheck(){
  //Single Switches
  if(uiSwitch1 == HIGH){
    //Direction  
    digitalWrite(firstMotorLeft, HIGH);
    delay(1000);
    digitalWrite(firstMotorLeft, LOW);
    delay(1000);
    digitalWrite(firstMotorRight, HIGH);
    //Limit Check
    digitalWrite(led, HIGH);
    limitCheck();
  }
  if(uiSwitch2 == HIGH){
    //Direction  
    digitalWrite(firstMotorRight, HIGH);
    delay(1000);
    digitalWrite(firstMotorRight, LOW);
    delay(1000);
    digitalWrite(firstMotorLeft, HIGH);
    //Limit Check
    limitCheck();   
  } 
  if(uiSwitch3 == HIGH){
    //Direction  
    digitalWrite(secondMotorRight, HIGH);
    delay(1000);
    digitalWrite(secondMotorRight, LOW);
    delay(1000);
    digitalWrite(secondMotorLeft, HIGH);
    //Limit Check
    limitCheck();
  }
  if(uiSwitch4 == HIGH){
    //Direction  
    digitalWrite(secondMotorLeft, HIGH);
    delay(1000);
    digitalWrite(secondMotorLeft, LOW);
    delay(1000);
    digitalWrite(secondMotorRight, HIGH);
    //Limit Check
    limitCheck(); 
  } 

  //Double Switches
  if(uiSwitch1 == HIGH && uiSwitch2 == HIGH){
      //Direction
      digitalWrite(firstMotorLeft, HIGH);
      delay(1000);
      digitalWrite(firstMotorLeft, LOW);
      delay(1000);
      digitalWrite(firstMotorRight, HIGH);
      delay(1000);
      digitalWrite(firstMotorRight, LOW);
      delay(1000);
      digitalWrite(firstMotorLeft, HIGH);
      //Limit Check
      limitCheck();
  }
  if(uiSwitch1 == HIGH && uiSwitch3 == HIGH){
      //Direction
      digitalWrite(firstMotorLeft, HIGH);
      digitalWrite(secondMotorRight, HIGH);
      delay(1000);
      delay(1000);
      digitalWrite(firstMotorLeft, LOW);
      digitalWrite(secondMotorRight, LOW);
      delay(1000);
      delay(1000);
      digitalWrite(firstMotorRight, HIGH);
      digitalWrite(secondMotorLeft, HIGH);
      //Limit Check
      limitCheck();
  }
  if(uiSwitch1 == HIGH && uiSwitch4 == HIGH){
      //Direction
      digitalWrite(firstMotorLeft, HIGH);
      digitalWrite(secondMotorLeft, HIGH);
      delay(1000);
      delay(1000);
      digitalWrite(firstMotorLeft, LOW);
      digitalWrite(secondMotorLeft, LOW);
      delay(1000);
      delay(1000);
      digitalWrite(firstMotorRight, HIGH);
      digitalWrite(secondMotorRight, HIGH);
      //Limit Check
      limitCheck();
  }
  if(uiSwitch2 == HIGH && uiSwitch3 == HIGH){
      //Direction
      digitalWrite(firstMotorRight, HIGH);
      digitalWrite(secondMotorRight, HIGH);
      delay(1000);
      delay(1000);
      digitalWrite(firstMotorRight, LOW);
      digitalWrite(secondMotorRight, LOW);
      delay(1000);
      delay(1000);
      digitalWrite(firstMotorLeft, HIGH);
      digitalWrite(secondMotorLeft, HIGH);
      //Limit Check
      limitCheck();
  }
  if(uiSwitch2 == HIGH && uiSwitch4 == HIGH){
      //Direction
      digitalWrite(firstMotorRight, HIGH);
      digitalWrite(secondMotorLeft, HIGH);
      delay(1000);
      delay(1000);
      digitalWrite(firstMotorRight, LOW);
      digitalWrite(secondMotorLeft, LOW);
      delay(1000);
      delay(1000);
      digitalWrite(firstMotorLeft, HIGH);
      digitalWrite(secondMotorRight, HIGH);
      //Limit Check
      limitCheck();
  }
  if(uiSwitch3 == HIGH && uiSwitch4 == HIGH){
       //Direction
      digitalWrite(secondMotorLeft, HIGH);
      delay(1000);
      digitalWrite(secondMotorLeft, LOW);
      delay(1000);
      digitalWrite(secondMotorRight, HIGH);
      delay(1000);
      digitalWrite(secondMotorRight, LOW);
      delay(1000);
      digitalWrite(secondMotorLeft, HIGH);
      //Limit Check
      limitCheck();
  }

  //Triple Switches
  if(uiSwitch1 == HIGH && uiSwitch2 == HIGH && uiSwitch3 == HIGH){
      //Direction
      digitalWrite(firstMotorLeft, HIGH);
      delay(1000);
      digitalWrite(firstMotorLeft, LOW);
      delay(1000);
      digitalWrite(firstMotorRight, HIGH);
      delay(1000);
      digitalWrite(firstMotorRight, LOW);
      delay(1000);
      digitalWrite(firstMotorLeft, HIGH);
      limitCheck();
      
      digitalWrite(secondMotorRight, HIGH);
      delay(1000);
      digitalWrite(secondMotorRight, LOW);
      delay(1000);
      digitalWrite(secondMotorLeft, HIGH);
      limitCheck();
  }
  if(uiSwitch1 == HIGH && uiSwitch3 == HIGH && uiSwitch4 == HIGH){
      //Direction
      digitalWrite(firstMotorLeft, HIGH);
      delay(1000);
      digitalWrite(firstMotorLeft, LOW);
      delay(1000);
      digitalWrite(firstMotorRight, HIGH);
      limitCheck();
      
      digitalWrite(secondMotorRight, HIGH);
      delay(1000);
      digitalWrite(secondMotorRight, LOW);
      delay(1000);
      digitalWrite(secondMotorLeft, HIGH);
      delay(1000);
      digitalWrite(secondMotorLeft, LOW);
      delay(1000);
      digitalWrite(secondMotorRight, HIGH);
      limitCheck();
  }
  if(uiSwitch1 == HIGH && uiSwitch2 == HIGH && uiSwitch4 == HIGH){
      //Direction
      digitalWrite(firstMotorLeft, HIGH);
      delay(1000);
      digitalWrite(firstMotorLeft, LOW);
      delay(1000);
      digitalWrite(firstMotorRight, HIGH);
      delay(1000);
      digitalWrite(firstMotorRight, LOW);
      delay(1000);
      digitalWrite(firstMotorLeft, HIGH);
      limitCheck();
      
      digitalWrite(secondMotorLeft, HIGH);
      delay(1000);
      digitalWrite(secondMotorLeft, LOW);
      delay(1000);
      digitalWrite(secondMotorRight, HIGH);
      limitCheck();
  }
  if(uiSwitch2 == HIGH && uiSwitch3 == HIGH && uiSwitch4 == HIGH){
      //Direction
      digitalWrite(firstMotorRight, HIGH);
      delay(1000);
      digitalWrite(firstMotorRight, LOW);
      delay(1000);
      digitalWrite(firstMotorLeft, HIGH);
      limitCheck();
      
      digitalWrite(secondMotorRight, HIGH);
      delay(1000);
      digitalWrite(secondMotorRight, LOW);
      delay(1000);
      digitalWrite(secondMotorLeft, HIGH);
      delay(1000);
      digitalWrite(secondMotorLeft, LOW);
      delay(1000);
      digitalWrite(secondMotorRight, HIGH);
      limitCheck();
  }

  //All Switches 
  if(uiSwitch1 == HIGH && uiSwitch2 == HIGH && uiSwitch3 == HIGH && uiSwitch4 == HIGH){
      //Direction
      digitalWrite(firstMotorLeft, HIGH);
      delay(1000);
      digitalWrite(firstMotorLeft, LOW);
      delay(1000);
      digitalWrite(firstMotorRight, HIGH);
      delay(1000);
      digitalWrite(firstMotorRight, LOW);
      delay(1000);
      digitalWrite(firstMotorLeft, HIGH);
      limitCheck();
      
      digitalWrite(secondMotorRight, HIGH);
      delay(1000);
      digitalWrite(secondMotorRight, LOW);
      delay(1000);
      digitalWrite(secondMotorLeft, HIGH);
      delay(1000);
      digitalWrite(secondMotorLeft, LOW);
      delay(1000);
      digitalWrite(secondMotorRight, HIGH);
      limitCheck();
  }
}
/*Checks if either of the limit switches have been hit. If so it stops the motor.*/
void limitCheck(){

  //Stops the first motor
  if(limitSwitch1 == HIGH){
    digitalWrite(firstMotorRight, LOW);
    
    digitalWrite(firstMotorLeft, LOW);
  }

  //stops the second motor
  if(limitSwitch2 == HIGH){
    digitalWrite(secondMotorRight, LOW);
    
    digitalWrite(secondMotorLeft, LOW);     
  }
}


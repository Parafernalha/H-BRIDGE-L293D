/* CONTROLE DO SENTIDO DA ROTAÇÃO E CONDIÇÃO ON/OFF DE UM MOTOR DC ATRAVÉS DA MOTOR SHIELD L293D */



#include <AFMotor.h>

AF_DCMotor motor1(1);



void setup ()



{

   motor1.setSpeed(0);  

}



void loop ()



{

  motor1.setSpeed(255);

  motor1.run(FORWARD);

  delay(5000);



  motor1.setSpeed(0);

  motor1.run(RELEASE);

  delay(10000);



  motor1.setSpeed(255);

  motor1.run(BACKWARD);

  delay(5000); 

}

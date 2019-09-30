


int motor_pwm1 = 3;
int motor_gpio2 = 2;
int dutyCycle = 50;

void setup(){
    //The motor has the following truth table:
    //        motor_GPIO   motor_PWM    OUT
    //            0           PWM        1
    //            1           PWM        2
    //
    dutyCycle = map(dutyCycle,0,100,0,255);
    pinMode(motor_pwm1,OUTPUT);
    pinMode(motor_gpio2,OUTPUT);
    digitalWrite(motor_gpio2,HIGH);
    
}

void loop(){
    
    analogWrite(motor_pwm1,dutyCycle);
    
   
}

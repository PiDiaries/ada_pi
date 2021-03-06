/*
 * Blinks LEDs when motion detected.
 * LED blink repition determined
 * by amount in serial_respond_pi_side.py
 */

 //variables
 int led1 = 5;
 int led2 = 6;
 int motion = 3;
 int wait = 500; //500ms = 1/2s

 void setup(){
  //put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(motion,INPUT);
  Serial1.begin(9600);
}


void loop() {
  //put your main code here, to run repeatedly:
  if (digitalRead(motion) == HIGH) {
    if (Serial1.available()) {
      flash(Serial1.read() - '0'); //converts Serial Message into a number
    }
   }
   delay(5000);
}

void flash(int repetitions) {
  for (int i = 0; i < repetitions; i ++){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    delay(wait);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    delay(wait);
  }
}

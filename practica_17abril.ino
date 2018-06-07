int motor = 0;
int pot = 0;

void setup() {
pinMode (10, OUTPUT);
Serial.begin (9600);
}

void loop() {
  motor = analogRead (0);
  motor = map (motor, 1, 1023, 1, 255);
  Serial.println (pot);
  
//analogWrite (pot);
delay (1000);
//analogWrite (pot);
//delay (1000);

}

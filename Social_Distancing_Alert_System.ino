int const trigPin = 10;
int const echoPin = 9;
int const buzzPin = 12;
int const led = 13;
void setup()
{
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
pinMode(buzzPin, OUTPUT);
pinMode(led, OUTPUT) ;
}
void loop()
{

int duration, distance;

digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;
if (distance <= 100 && distance >= 0) {

  digitalWrite(buzzPin, HIGH);
digitalWrite(led, LOW);
} else {

digitalWrite(buzzPin, LOW);
digitalWrite(led, HIGH);
}

delay(60);
}

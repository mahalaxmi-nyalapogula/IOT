const int TRIG_PIN=6;
const int ECHO_PIN=7;
const int LED_PIN=3;
const int LED_PIN1=8;
const int LED_PIN2=9;
const int LED_PIN3=10;

const int DISTANCE_THRESHOLD1=10;
const int DISTANCE_THRESHOLD2=25;
const int DISTANCE_THRESHOLD3=35;
const int DISTANCE_THRESHOLD4=45;

float duration_us,distance_cm;
void setup() {
  Serial.begin (9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);
  pinMde(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration_us=pulseIn(ECHO_PIN,HIGH);

  distance_cm=0.017* duration_us;

  if(distance_cm < DISTANCE_THRESHOLD1)
  digitalWrite(LED_PIN1, HIGH);
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN3, LOW);
  digitalWrite(LED_PIN4, HIGH);
  else
  digitalWrite (LED_PIN1, LOW);
  digitalWrite (LED_PIN4, LOW);

  if(distance_cm < DISTANCE_THRESHOLD2)
  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN2, HIGH);
  digitalWrite(LED_PIN3, LOW);
  digitalWrite(LED_PIN4, HIGH);

  else
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN4, LOW);

  if(distance_cm < DISTANCE_THRESHOLD3)
  digitalWrite(LED_PIN1 , LOW);
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN3, HIGH);
  digitalWrite(LED_PIN4, HIGH);
  else
  digitalWrite(LED_PIN3, LOW);
  digitalWrite(LED_PIN4, LOW);


  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println("cm");
  delay(500);
  // put your main code here, to run repeatedly:

}

const int trigPin = 9;
const int echoPin = 10;

long duration;
int distanceCM;
int distanceIN;
String distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW); // Make sure the trigger pin is clear
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);       // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); // Read the feedback from the sensor and store it in duration
  distanceCM = duration*0.034/2;     // Calculations for the distance in centimeters
  distanceIN = distanceCM/2.54;      // Calculations for the distance in inches
  distance = String(int(distanceIN/12)) + " ft, " + String(distanceIN%12) + " in";

  Serial.println(distance);
  delay(2000);
}


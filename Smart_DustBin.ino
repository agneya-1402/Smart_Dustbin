#include <Servo.h>

// pins
const int trigPin = 10;
const int echoPin = 9;
const int servoPin = 3;

// Servo object
Servo dustbinServo;

// variables
long duration;
int distance;

void setup() {
  // init sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // servo attach to pin
  dustbinServo.attach(servoPin);

  // servo close
  dustbinServo.write(0);

  // serial comm
  Serial.begin(9600);
}

void loop() {
  // 10-microsecond pulse to trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // calculate distance
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Convert to centimeters

  // Print distance 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // hand is near (within 15 cm)
  if (distance > 0 && distance <= 15) {
    dustbinServo.write(90); // Open lid
    delay(2000);            // lid open (2 sec)
  } else {
    dustbinServo.write(0);  // Close lid
  }

  delay(100);
}

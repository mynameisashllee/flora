#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

const int TRIG = 6; // distance sensor values (pins and threshold)
const int ECHO = 7;
const int DISTANCE = 150;

#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // This is the 'maximum' pulse length count (out of 4096)
#define USMIN  600 // This is the rounded 'minimum' microsecond length based on the minimum pulse of 150
#define USMAX  2400 // This is the rounded 'maximum' microsecond length based on the maximum pulse of 600
#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT); // setting pins
  pinMode(ECHO, INPUT);

  pwm.begin();
  pwm.setPWMFreq(SERVO_FREQ);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  float duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.017;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < DISTANCE) {
    close();
  } else {
    open();
  }

  delay(100);

}

void open() {
  for (int pos = SERVOMIN; pos < SERVOMAX; pos += 10); {
    pwm.setPWM(0, 0, pos);
    pwm.setPWM(1, 0, pos);
    pwm.setPWM(2, 0, pos);
    pwm.setPWM(3, 0, pos);
    Serial.println("0");
    delay(50);
  }

  delay(5000);
}

void close() {
  for (int pos = SERVOMAX; pos > SERVOMIN; pos -= 10); {
    pwm.setPWM(0, 0, pos_m);
    pwm.setPWM(1, 0, pos_m);
    pwm.setPWM(2, 0, pos_m);
    pwm.setPWM(3, 0, pos_m);
    Serial.println("180");
    delay(50);
  }

  delay(5000);
}

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

bool isOpen = false;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT); // setting pins
  pinMode(ECHO, INPUT);

  pwm.begin();
  pwm.setPWMFreq(SERVO_FREQ);
  Serial.println("Hello world");


}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  float duration = pulseIn(ECHO, HIGH);
  float distance = duration * 0.017;

  Serial.print("Distance: ");
  Serial.println(distance);
  // if dist < max, if not open, open it. if open, run open w return func
  // else if open, close. if close, run close w return func
  if (distance < DISTANCE) {
    open();
  } else {
    close();
  }

  delay(100);

}

void open() { //from 0 to 180
  if (isOpen) return;
  for (int pos = SERVOMIN; pos < 400; pos += 10) {
    pwm.setPWM(0, 0, pos);
    pwm.setPWM(1, 0, pos);
    pwm.setPWM(2, 0, pos);
    pwm.setPWM(3, 0, pos);
    delay(50);
  }
  Serial.println("open");
  isOpen = true;
  delay(5000);
}

void close() { //from 180 to 0
  if (!isOpen) return;
  for (int pos = 400; pos > SERVOMIN; pos -= 10) {
    pwm.setPWM(0, 0, pos);
    pwm.setPWM(1, 0, pos);
    pwm.setPWM(2, 0, pos);
    pwm.setPWM(3, 0, pos);
    delay(50);
  }
  Serial.println("close");
  isOpen = false;
  delay(5000);
}

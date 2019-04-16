#include <Servo.h>

// Variable declarations:
Servo myservo; //create servo object to control servo
const int buttonPin = 2; //the pin for the button
int buttonState = 0; // the state of the button (defaults to 0)

// Setup:
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(buttonPin, INPUT); // set buttonpin as an input
}

// Main Loop:
void loop() {

  buttonState = digitalRead(buttonPin);  // check the state of the button (this is so easy compared to lab!)

  if (buttonState == HIGH) {  // move the servo if the button is pressed

    myservo.write(180); //degree of movement
    delay(500);         //0.5 sec delay
  
    myservo.write(20); 
    delay(500);

  } else {
    delay(10);
  }
}
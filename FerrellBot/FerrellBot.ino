/***********************************************************************
 * Exp4_MakingSounds -- RedBot Experiment 4
 *
 * Push the button (D12) to make some noise and start running!
 *
 * Hardware setup:
 * Plug the included RedBot Buzzer board into the Servo header labeled 9.
 *
 * This sketch was written by SparkFun Electronics,with lots of help from 
 * the Arduino community. This code is completely free for any use.
 * 
 *
 ***********************************************************************/

#include <RedBot.h>
RedBotMotors motors;
RedBotAccel accelerometer;


// Create a couple of constants for our pins.
const int buzzerPin = 9;
const int buttonPin = 12;
const int beat = 140; //Gives beats per milisecond
// B/ms must be divided into beats to give miliseconds

void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP); // configures the button as an INPUT
  // INPUT_PULLUP defaults it to HIGH.
  pinMode(buzzerPin, OUTPUT);  // configures the buzzerPin as an OUTPUT
}

void loop()
{ 
accelerometer.read(); // updates the x, y, and z axis readings on the acceleromter

  if ( accelerometer.x > 750) // if the button is pushed (LOW)
  { 

  
    
  playNote(1174, .5);
  playNote(1397, .5);
  left();
  playNote(1568, 2.5);
  
  playNote(1174, .5); //Ba
  playNote(1244, .5); //by
  playNote(1174, .5);
  playNote(1397, 1);
  playNote(1174, 2.5);
  playNote(1174, .5); //Dont
  playNote(1397, 1); //Hurt
  playNote(1174, 2.5); //Me
  playNote(1174, .5); //No
  playNote(1046, 4.5); //More....
  
  rest(2);
  playNote(1174, .5); //Ba
  playNote(1244, .5); //by
  playNote(1174, .5);
  playNote(1397, 1);
  playNote(1174, 2.5);
  
  playNote(1174, .5); //Dont
  playNote(1397, 1); //Hurt
  playNote(1174, 2.5); //Me
  playNote(1174, .5); //No
  playNote(1046, 4.5); //More....

//BASELINE INSTRUMENTAL

  rest(12);
  rest(2.5);
  playNote(1174, .5); //What
  playNote(1397, .5); //Is
  playNote(1568, 2.5); //Love
  rest(2);
  rest(8);
  rest(3);
  playNote(1174, 1); //No
  playNote(1046, 1); //More....
  rest(3);
  rest(12);
  rest(2);
  
  //VERSE
  
  playNote(1174, .5); //You
  playNote(1046, .5); //
  playNote(932, .5); //Dont
  playNote(1174, 2.5); //Care
  
  playNote(1174, .5); //
  playNote(1046, .5); //
  rest(.5);
  playNote(1174, 2); //
  
  playNote(1046, .5); //
  playNote(1174, .5); //
  playNote(1244, .5); // Eb
  playNote(1174, .5); //
  
  playNote(1174, 1); //
  playNote(1046, 1); //
  playNote(1046, .5); //
  playNote(1046, 1); //
  playNote(932, .5); //
  playNote(932, 2.5); //
  
  //Sec
  
  playNote(1174, .5); //You
  playNote(1046, 1); //
  playNote(1174, 2); //Care
  playNote(1046, .5); //
  playNote(1174, .5); //
  playNote(1046, .5); //
  rest(.5);
  playNote(1174, 2.5); //
  playNote(1174, .5); //
  playNote(1244, .5); // Eb
  playNote(1174, .5); //
  playNote(1174, 1); //
  playNote(1046, 2); //
  playNote(1174, .5); //
  playNote(1397, .5); //
  playNote(1568, 2.5); //
  
  playNote(1174, .5); // Ba
  playNote(1244, .5); // by
  playNote(1174, .5); //
  playNote(1397, 1); //f
  playNote(1174, 2.5); //
  
  playNote(1174, .5); //
  playNote(1397, 1); //f
  playNote(1174, 2.5); //
  playNote(1174, .5); //
  playNote(1046, 2.5); //
  
  rest(.5);
  
  playNote(1174, .5);
  playNote(1397, .5);
  playNote(1568, 2.5);
  
  playNote(1174, .5); //Ba
  playNote(1244, .5); //by
  playNote(1174, .5);
  playNote(1397, 1);
  playNote(1174, 2.5);
  
  playNote(1174, .5); //Dont
  playNote(1397, 1); //Hurt
  playNote(1174, 2.5); //Me
  playNote(1174, .5); //No
  playNote(1046, 4.5); //More....

  rest(2);

  //WOAHOHOHHH
  playNote(1174, .5); //  
  playNote(1397, .5); //
  playNote(1568, .5); //
  playNote(1864, .5); //
  playNote(2092, .5); //
  playNote(2349, .5); //
  playNote(2092, .5); //
  playNote(1864, 1); //
  playNote(1568, 1); //
  rest(.1);
  playNote(1864, .4); //
  playNote(2092, .5); //
  playNote(2349, .5); //
  playNote(2092, .5); //
  playNote(1864, 1); //
  playNote(1568, 1.5); //
  playNote(2092, 1.5); //
  playNote(1864, 2.5); //
  
  rest(2);
  
  //WOAHOHOHHH 2
 
  playNote(1174, .5); //  
  playNote(1397, .5); //
  playNote(1568, .5); //
  playNote(1864, .5); //
  playNote(2092, .5); //
  playNote(2349, .5); //
  playNote(2092, .5); //
  playNote(1864, 1); //
  playNote(1568, 1); //
  rest(.1);
  playNote(1864, .4); //
  playNote(2092, .5); //
  playNote(2349, .5); //
  playNote(2092, .5); //
  playNote(1864, 1); //
  playNote(1568, 1.5); //
  playNote(2092, 1.5); //
  playNote(1864, 2.5); //
  
  }
  else  // otherwise, do this.
  { 
  }

}

void playNote(int freq, double fraction){
  tone(buzzerPin, freq);
  int duration = (int) ((fraction/beat) * 60 * 1000);
  delay(duration); brb!
  noTone(buzzerPin);   // Stop playing the tone.
  //delay(500); 
}
void rest(double fraction){
  int duration = (int) ((fraction/beat) * 60 * 1000);
  delay(duration); 
  //delay(500); 
}
 void left() {
  motors.stop();
  motors.pivot (255);
}
 
void right() {
 motors.stop();
 motors.pivot (-255);
}

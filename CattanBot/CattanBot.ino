/***********************************************************************
 * WIL_Lyric- 1 of 3 parts of the RedBot "What is Love" dance routine
 * Intended to be used alongside WIL_Baseline and WIL_Lyric_8VA
 * 
 * Written by Kevin Gilboy and Dylan McGuire
 * Created on 2015 January 24, last modified 2015 January 25
 * 
 * Written for ENGR 0716 at the University of Pittsburgh.
 * Completely free for any use, including clubbing.
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

  
    
  playNote(587, .5);
  playNote(698, .5);
  left();
  playNote(784, 2.5);
  
  playNote(587, .5); //Ba
  playNote(622, .5); //by
  playNote(587, .5);
  playNote(698, 1);
  playNote(587, 2.5);
  playNote(587, .5); //Dont
  playNote(698, 1); //Hurt
  playNote(587, 2.5); //Me
  playNote(587, .5); //No
  playNote(523, 4.5); //More....
  
  rest(2);
  playNote(587, .5); //Ba
  playNote(622, .5); //by
  playNote(587, .5);
  playNote(698, 1);
  playNote(587, 2.5);
  
  playNote(587, .5); //Dont
  playNote(698, 1); //Hurt
  playNote(587, 2.5); //Me
  playNote(587, .5); //No
  playNote(523, 4.5); //More....

//BASELINE INSTRUMENTAL

  rest(12);
  rest(2.5);
  playNote(587, .5); //What
  playNote(698, .5); //Is
  playNote(784, 2.5); //Love
  rest(2);
  rest(8);
  rest(3);
  playNote(587, 1); //No
  playNote(523, 1); //More....
  rest(3);
  rest(12);
  rest(2);
  
  //VERSE
  
  playNote(587, .5); //You
  playNote(523, .5); //
  playNote(466, .5); //Dont
  playNote(587, 2.5); //Care
  
  playNote(587, .5); //
  playNote(523, .5); //
  rest(.5);
  playNote(587, 2); //
  
  playNote(523, .5); //
  playNote(587, .5); //
  playNote(622, .5); // Eb
  playNote(587, .5); //
  
  playNote(587, 1); //
  playNote(523, 1); //
  playNote(523, .5); //
  playNote(523, 1); //
  playNote(466, .5); //
  playNote(466, 2.5); //
  
  //Sec
  
  playNote(587, .5); //You
  playNote(523, 1); //
  playNote(587, 2); //Care
  playNote(523, .5); //
  playNote(587, .5); //
  playNote(523, .5); //
  rest(.5);
  playNote(587, 2.5); //
  playNote(587, .5); //
  playNote(622, .5); // Eb
  playNote(587, .5); //
  playNote(587, 1); //
  playNote(523, 2); //
  playNote(587, .5); //
  playNote(698, .5); //
  playNote(784, 2.5); //
  
  playNote(587, .5); // Ba
  playNote(622, .5); // by
  playNote(587, .5); //
  playNote(698, 1); //f
  playNote(587, 2.5); //
  
  playNote(587, .5); //
  playNote(698, 1); //f
  playNote(587, 2.5); //
  playNote(587, .5); //
  playNote(523, 2.5); //
  
  rest(.5);
  
  playNote(587, .5);
  playNote(698, .5);
  playNote(784, 2.5);
  
  playNote(587, .5); //Ba
  playNote(622, .5); //by
  playNote(587, .5);
  playNote(698, 1);
  playNote(587, 2.5);
  
  playNote(587, .5); //Dont
  playNote(698, 1); //Hurt
  playNote(587, 2.5); //Me
  playNote(587, .5); //No
  playNote(523, 4.5); //More....

  rest(2);

  //WOAHOHOHHH
  playNote(587, .5); //  
  playNote(698, .5); //
  playNote(784, .5); //
  playNote(932, .5); //
  playNote(1046, .5); //
  playNote(1174, .5); //
  playNote(1046, .5); //
  playNote(932, 1); //
  playNote(784, 1); //
  rest(.1);
  playNote(932, .4); //
  playNote(1046, .5); //
  playNote(1174, .5); //
  playNote(1046, .5); //
  playNote(932, 1); //
  playNote(784, 1.5); //
  playNote(1046, 1.5); //
  playNote(932, 2.5); //
  
  rest(2);
  
  //WOAHOHOHHH 2
 
  playNote(587, .5); //  
  playNote(698, .5); //
  playNote(784, .5); //
  playNote(932, .5); //
  playNote(1046, .5); //
  playNote(1174, .5); //
  playNote(1046, .5); //
  playNote(932, 1); //
  playNote(784, 1); //
  rest(.1);
  playNote(932, .4); //
  playNote(1046, .5); //
  playNote(1174, .5); //
  playNote(1046, .5); //
  playNote(932, 1); //
  playNote(784, 1.5); //
  playNote(1046, 1.5); //
  playNote(932, 2.5); //
  
  }
  else  // otherwise, do this.
  { 
  }

}

void playNote(int freq, double fraction){
  tone(buzzerPin, freq);
  int duration = (int) ((fraction/beat) * 60 * 1000);
  delay(duration); 
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

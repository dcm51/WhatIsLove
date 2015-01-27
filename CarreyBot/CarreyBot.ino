/***********************************************************************
 * WIL_Baseline- 1 of 3 parts of the RedBot "What is Love" dance routine
 * Intended to be used alongside WIL_Lyric and WIL_Lyric_8VA
 * 
 * Written by Kevin Gilboy and Dylan McGuire
 * Created on 2015 January 24, last modified 2015 January 27
 * 
 * Written for ENGR 0716 at the University of Pittsburgh.
 * Completely free for any use, including clubbing.
 * 
 ***********************************************************************/

#include <RedBot.h>
#include "notes.h"
RedBotMotors motors;
RedBotAccel accelerometer;

// Create a couple of constants for our pins.
const int buzzerPin = 9;
const int buttonPin = 12;
const int beat = 140; // Gives beats per milisecond

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

  while (accelerometer.x < 750) // prevents the RedBot from running until it detects a bump
  { 
    // do nothing
  }
  
  /** DANCE ROUTINE **/
  playNote(587, .5);
  rest(17);
  for (int i = 0; i<10; i++)
  {
    playNote(noteG3, 1);
    playNote(noteG3, .75);
    playNote(noteG3, .25);
    rest(.5);
    playNote(noteG3, .5);
    rest(.5);
    playNote(noteF3, .5);
  
    playNote(noteBb3, 1);
    playNote(noteBb3, .75);
    playNote(noteBb3, .25);
    rest(.5);
    playNote(262, .5);
    rest(.5);
    playNote(294, .5);
  
    playNote(294, 1);
    playNote(294, .75);
    playNote(294, .25);
    rest(.5);
    playNote(294, .5);
    rest(.5);
    playNote(294, .5);
      
    playNote(349, 1);
    playNote(349, .75);
    playNote(349, .25);
    rest(.5);
    playNote(294, .5);
    rest(.5);
    playNote(349, .5);
  }  
  
  /**while (D12NOTPRESSED) // prevents the routine from running again until the user presses D12
  {
    // do nothing
  }**/
}

void playNote(int freq, double fraction)
{
  tone(buzzerPin, freq);
  int duration = (int) ((fraction/beat) * 60 * 1000);
  delay(duration); 
  noTone(buzzerPin);   // Stop playing the tone.
  //delay(500); 
  
}

void rest(double fraction)
{
  int duration = (int) ((fraction/beat) * 60 * 1000);
  delay(duration); 
  //delay(500); 
}

void lbob(void)
{
  // Pivot to the left in time to the music
  motors.rightMotor(150); // Turn CCW at motorPower of 100
  motors.leftMotor(150);  // Turn CCW at motorPower of 100
  delay(7500/beat);            
  motors.brake();    // brake() motors
  delay(22500/beat);
}

void rbob(void)
{
  // Pivot to the right in time to the music
  motors.rightMotor(-150); // Turn CCW at motorPower of 100
  motors.leftMotor(-150);  // Turn CCW at motorPower of 100
  delay(7500/beat);       
  motors.brake();    // brake() motors
  delay(22500/beat);
}

void measure(float notes[])
{
  // Determine the number of notes
  int numberNotes = (sizeof(notes) / sizeof(float)) / 2;
  if (numberNotes == 0) 
  {
    // Run the motor
  speed *= -1;
  motors.rightMotor(speed);
  motors.leftMotor(speed);
  delay(7500/beat);
  }
  // Set up the notes
  
  // Run the motor
  speed *= -1;
  motors.rightMotor(speed);
  motors.leftMotor(speed);
  delay(7500/beat);
  
  // Go through the rest of the notes
}




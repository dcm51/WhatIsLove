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
    accelerometer.read();
  }
  
  /** DANCE ROUTINE **/
  playNote(587, .5);
  rest(17);
  for (int i = 0; i<10; i++)
  {
    int note = noteG3;
    /*****BEAT 1 OF PHRASE 1: G FOR 1 BEAT*****/
    motors.leftMotor(150); motors.rightMotor(150); // start a left twitch
    tone(buzzerPin, note); // start playing G3; will play for 1 beat
    delay(7500/beat); motors.brake(); // stop twitch
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); // start a right twitch
    delay(7500/beat); motors.brake(); // stop twitch
    delay(22500/beat); noTone(buzzerPin); // stop the note. We have completed 1 beat; we will repeat this process for 3 more beats in order to finish a phrase
    /*****BEAT 2 OF PHRASE 1: G FOR .75, G FOR .25*****/
    motors.leftMotor(150); motors.rightMotor(150);
    tone(buzzerPin, note);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150);
    delay(7500/beat); motors.brake();
    delay(7500/beat); noTone(buzzerPin);
    tone(buzzerPin, noteG3); delay(15000/beat); noTone(buzzerPin);
    /*****BEAT 3 OF PHRASE 1: REST FOR .5, G FOR .5*****/
    motors.leftMotor(150); motors.rightMotor(150);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); tone(buzzerPin, note);
    delay(7500/beat); motors.brake();
    delay(22500/beat); noTone(buzzerPin);
    /*****BEAT 4 OF PHRASE 1: REST FOR .5, F FOR .5*****/
    motors.leftMotor(150); motors.rightMotor(150);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); tone(buzzerPin, noteF3);
    delay(7500/beat); motors.brake();
    delay(22500/beat); noTone(buzzerPin);
    
    note = noteBb3;
    /*****BEAT 1 OF PHRASE 2: G FOR 1 BEAT*****/
    motors.leftMotor(150); motors.rightMotor(150); // start a left twitch
    tone(buzzerPin, note); // start playing G3; will play for 1 beat
    delay(7500/beat); motors.brake(); // stop twitch
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); // start a right twitch
    delay(7500/beat); motors.brake(); // stop twitch
    delay(22500/beat); noTone(buzzerPin); // stop the note. We have completed 1 beat; we will repeat this process for 3 more beats in order to finish a phrase
    /*****BEAT 2 OF PHRASE 2: G FOR .75, G FOR .25*****/
    motors.leftMotor(150); motors.rightMotor(150);
    tone(buzzerPin, note);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150);
    delay(7500/beat); motors.brake();
    delay(7500/beat); noTone(buzzerPin);
    tone(buzzerPin, note); delay(15000/beat); noTone(buzzerPin);
    /*****BEAT 3 OF PHRASE 2: REST FOR .5, G FOR .5*****/
    motors.leftMotor(150); motors.rightMotor(150);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); tone(buzzerPin, noteC4);
    delay(7500/beat); motors.brake();
    delay(22500/beat); noTone(buzzerPin);
    /*****BEAT 4 OF PHRASE 2: REST FOR .5, F FOR .5*****/
    motors.leftMotor(150); motors.rightMotor(150);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); tone(buzzerPin, noteD4);
    delay(7500/beat); motors.brake();
    delay(22500/beat); noTone(buzzerPin);
    
    note = noteD4;
    /*****BEAT 1 OF PHRASE 3: G FOR 1 BEAT*****/
    motors.leftMotor(150); motors.rightMotor(150); // start a left twitch
    tone(buzzerPin, note); // start playing G3; will play for 1 beat
    delay(7500/beat); motors.brake(); // stop twitch
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); // start a right twitch
    delay(7500/beat); motors.brake(); // stop twitch
    delay(22500/beat); noTone(buzzerPin); // stop the note. We have completed 1 beat; we will repeat this process for 3 more beats in order to finish a phrase
    /*****BEAT 2 OF PHRASE 3: G FOR .75, G FOR .25*****/
    motors.leftMotor(150); motors.rightMotor(150);
    tone(buzzerPin, note);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150);
    delay(7500/beat); motors.brake();
    delay(7500/beat); noTone(buzzerPin);
    tone(buzzerPin, note); delay(15000/beat); noTone(buzzerPin);
    /*****BEAT 3 OF PHRASE 3: REST FOR .5, G FOR .5*****/
    motors.leftMotor(150); motors.rightMotor(150);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); tone(buzzerPin, note);
    delay(7500/beat); motors.brake();
    delay(22500/beat); noTone(buzzerPin);
    /*****BEAT 4 OF PHRASE 3: REST FOR .5, F FOR .5*****/
    motors.leftMotor(150); motors.rightMotor(150);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); tone(buzzerPin, note);
    delay(7500/beat); motors.brake();
    delay(22500/beat); noTone(buzzerPin);
    
    note = noteF4;
    /*****BEAT 1 OF PHRASE 4: G FOR 1 BEAT*****/
    motors.leftMotor(150); motors.rightMotor(150); // start a left twitch
    tone(buzzerPin, note); // start playing G3; will play for 1 beat
    delay(7500/beat); motors.brake(); // stop twitch
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); // start a right twitch
    delay(7500/beat); motors.brake(); // stop twitch
    delay(22500/beat); noTone(buzzerPin); // stop the note. We have completed 1 beat; we will repeat this process for 3 more beats in order to finish a phrase
    /*****BEAT 2 OF PHRASE 4: G FOR .75, G FOR .25*****/
    motors.leftMotor(150); motors.rightMotor(150);
    tone(buzzerPin, note);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150);
    delay(7500/beat); motors.brake();
    delay(7500/beat); noTone(buzzerPin);
    tone(buzzerPin, note); delay(15000/beat); noTone(buzzerPin);
    /*****BEAT 3 OF PHRASE 4: REST FOR .5, G FOR .5*****/
    motors.leftMotor(150); motors.rightMotor(150);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); tone(buzzerPin, noteD4);
    delay(7500/beat); motors.brake();
    delay(22500/beat); noTone(buzzerPin);
    /*****BEAT 4 OF PHRASE 4: REST FOR .5, F FOR .5*****/
    motors.leftMotor(150); motors.rightMotor(150);
    delay(7500/beat); motors.brake();
    delay(22500/beat); motors.leftMotor(-150); motors.rightMotor(-150); tone(buzzerPin, noteF4);
    delay(7500/beat); motors.brake();
    delay(22500/beat); noTone(buzzerPin);
  }  
  
  /**while (D12NOTPRESSED) // prevents the routine from running again until the user presses D12
  {
    // do nothing
  }**/
}



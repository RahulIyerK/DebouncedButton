//
//  DebouncedButton.cpp
//
//  The actual code for debouncing is not mine (it's in the Arduino IDE examples (0.2 Digital), a
//  is written by David A. Mellis and Limor Fried.) I've merely made button debouncing easier to
//  implement on the Arduino through a library. :)  Enjoy!
//
//  Created by Rahul Iyer on 10/15/16.
//
//

#include <Arduino.h>
#include <DebouncedButton.h>

DebouncedButton::DebouncedButton(void)
{
    
}
void DebouncedButton::init(int buttonPin, int delayTime) //invoke this method to initialize the
                                                         //button's pin number and the time period
                                                         //in milliseconds for which you want to
                                                         //debounce 50 works for most projects
{
    pin = buttonPin;
    lastReading = 0;
    buttonState = 0;
    
    debounceDelay = delayTime;
    lastDebounceTime = 0;
    pinMode(pin, INPUT);
}
int DebouncedButton::digitalReadButton(void) //invoke this method to read the button state
                                             //(w/ debouncing correction)
{
    buttonCheck();
    return buttonState;
}

void DebouncedButton::buttonCheck() //debouncing code
{
    int currentReading = digitalRead(pin);
    
    if (currentReading != lastReading)
    {
        lastDebounceTime = millis();
    }
    if ((millis() - lastDebounceTime)> debounceDelay)
    {
        buttonState = currentReading;
    }
    lastReading = currentReading;
}

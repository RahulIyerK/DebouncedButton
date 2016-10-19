//
//  DebouncedButton.h
//
//  The actual code for debouncing is not mine (it's in the Arduino IDE examples (0.2 Digital), a
//  is written by David A. Mellis and Limor Fried.) I've merely made button debouncing easier to
//  implement on the Arduino through a library. :)  Enjoy!
//
//  Created by Rahul Iyer on 10/15/16.
//
//

#ifndef DebouncedButton_h
#define DebouncedButton_h

#include <Arduino.h>

class DebouncedButton
{

public:
    DebouncedButton(void);
    void init (int buttonPin, int delayTime);
    int digitalReadButton(void);
private:
    int pin;
    int buttonState;
    int lastReading;
    
    long debounceDelay;
    long lastDebounceTime;
    void buttonCheck(void);
    
};

#endif /* DebouncedButton_h */

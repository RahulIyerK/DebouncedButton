# DebouncedButton
An Arduino library for implementing button debouncing neatly!

Debouncing is a necessary step in working with tacticle pushbuttons with any microcontroller or development board.  When
pressed, pushbuttons often switch rapidly between high and low several times before coming to "rest" in the final state. 
These quick switches, which we call "bouncing" are imperceptible to humans, but because microcontrollers have high clock 
speeds and read the button state many millions of time per second, the "bouncing" of the button is interpreted as many 
rapid presses of the button.  Often, this results in faulty output, such as flickering of LEDs that the microcontroller 
lights up or switches off based on the button input.

The software implementation of debouncing works by ensuring that a change in a button's state is only recorded when that
change has occurred some significant period of time since the previous one.  When a state change occurs, the software 
(which comes with the Arduino IDE under digital input examples) compares the time in milliseconds since the last state change
to some threshold, then changes the button state only if the time since the last change is greater than the threshold. 

I wrote this library to provide an easier method of implementing debouncing in Arduino sketches.  Rather than having to copy
and paste debouncing code, the user just has to create "DebouncedButton" objects, initialize the objects with the input pin and debouncing time, and invoke the digitalReadButton() method!

Enjoy!

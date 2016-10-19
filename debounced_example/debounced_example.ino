#include <DebouncedButton.h>


int BUTTON_PIN = 4;
int LED_PIN = 12;

DebouncedButton dbutton;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  dbutton.init(BUTTON_PIN, 50);
}

void loop() {
   if (dbutton.digitalReadButton()==1)
   {
      digitalWrite(LED_PIN, HIGH);
   }
   else
   {
      digitalWrite(LED_PIN, LOW);
   }

}

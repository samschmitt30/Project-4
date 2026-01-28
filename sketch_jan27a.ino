//Project 4 -Demonstrating a Digital Input
#define LED 3
#define BUTTON 7

void setup() 
{
  pinMode (LED, OUTPUT); //output for the LED
  pinMode (BUTTON, INPUT); //input for the button
}

void loop() 
{
  if ( digitalRead(BUTTON) == HIGH)
  {
    digitalWrite(LED, HIGH); //turn on LED
    delay(500);              //wait for the 0.5 seconds
    digitalWrite(LED, LOW);  //turn off the LED
  }
}

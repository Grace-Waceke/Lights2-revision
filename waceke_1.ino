// C++ code
//
int red=7;
int green=1;
int yellow=4;
void setup()
  
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(4000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, HIGH);
  delay(6000);
  digitalWrite(yellow, LOW);
  delay(1000);
  digitalWrite(green, HIGH);
  delay(8000);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(yellow, HIGH);
  delay(1000);
}
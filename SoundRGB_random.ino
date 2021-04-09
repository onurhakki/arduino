
int redpin = 5; //select the pin for the red LED
int greenpin =6; // select the pin for the  blue LED
int bluepin =7;// select the pin for the green LED
int value1;
int value2;
int value3;
int sound_read = 4;
int potans_read;
int no;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(potans_read, INPUT);
  pinMode(sound_read, INPUT);
  Serial.begin(9600);
}
 
void loop() 
{

    analogWrite(11,255);
    analogWrite(12,255);
    if (digitalRead(sound_read) == 1)
    {
      value1 = random();
      value2 = random();
      value3 = random();
      potans_read = analogRead(2);
      for (no=0;no<5;no++)
      {
        
        analogWrite(redpin, random());
        analogWrite(greenpin, random());
        analogWrite(bluepin, random());
        analogWrite(8, random());
        analogWrite(9, random());
        analogWrite(10, random(1,200));
        delay(2*potans_read/(pow(1+no,2)));
  
        analogWrite(redpin, 0);
        analogWrite(greenpin, 0);
        analogWrite(bluepin, 0);
        analogWrite(8, 0);
        analogWrite(9, 0);
        analogWrite(10, 0);
        delay(3*potans_read/(pow(1+no,2)));
      

      }}
      else
      {
                analogWrite(redpin, 0);
        analogWrite(greenpin, 0);
        analogWrite(bluepin, 0);
}
      }

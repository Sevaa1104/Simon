  const int Green = 2;
  const int Red = 3;
  const int Blue = 4;
  const int Yellow = 5;
  const int GreenButton = 6;
  const int RedButton = 7;
  const int BlueButton = 8;
  const int YellowButton = 9;
  int RGBY [] = {Green, Red, Blue, Yellow};
  int repeat = 1;

  void randomFlash() {
    int RGBYIndex = random(0,4); // Stores values from the Array above
  int RGBYValue = RGBY[RGBYIndex]; // Gives a random value from RGBYIndex

digitalWrite (RGBYValue, HIGH); // Lights the LED connected to the pin of the value given by RGBYValue
delay(1000);
digitalWrite (RGBYValue, LOW);
delay(100);
  }

void setup() {
  // put your setup code here, to run once:
pinMode (Green, OUTPUT);
pinMode (Red, OUTPUT);
pinMode (Blue, OUTPUT);
pinMode (Yellow, OUTPUT);
pinMode (GreenButton, INPUT);
pinMode (RedButton, INPUT);
pinMode (BlueButton, INPUT);
pinMode (YellowButton, INPUT);
  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  int RGBYIndex = random(0,4); // Stores values from the Array above
  int RGBYValue = RGBY[RGBYIndex]; // Gives a random value from RGBYIndex

digitalWrite (RGBYValue, HIGH); // Lights the LED connected to the pin of the value given by RGBYValue
delay(1000);
digitalWrite (RGBYValue, LOW);
delay(100);


}

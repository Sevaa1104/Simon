  const int Gout = 2;
  const int Rout = 3;
  const int Bout = 4;
  const int Yout = 5;
  int RGBY [5] = {Gout, Rout, Bout, Yout};

void setup() {
  // put your setup code here, to run once:
pinMode (Gout, OUTPUT);
pinMode (Rout, OUTPUT);
pinMode (Bout, OUTPUT);
pinMode (Yout, OUTPUT);
  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  int RGBYIndex = random(0,5); // Stores values from the Array above
  int RGBYValue = RGBY[RGBYIndex]; // Gives a random value from RGBYIndex

digitalWrite (RGBYValue, HIGH); // Lights the LED connected to the pin of the value given by RGBYValue
delay(1000);
digitalWrite (RGBYValue, LOW);


}

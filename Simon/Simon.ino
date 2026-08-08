//These are the Output pins that activate the LEDs during sequence generation and when pressing each button.
  const int Gout = 2;
  const int Rout = 3;
  const int Bout = 4;
  const int Yout = 5;

      int goutState = 0;
      int boutState = 0;
      int routState = 0;
      int youtState = 0; // initial state of each output pin

//These are the Input pins that read each button press.
  const int Gin = 13;
  const int Bin = 9;
  const int Rin = 4;
  const int Yin = 3;

      int ginState = 0;
      int binState = 0;
      int rinState = 0;
      int yinState = 0;// initial low state of each input pin

int Outputs [] = {Gout, Bout, Rout, Yout};

void setup() {
  // put your setup code here, to run once:
pinMode (Gout, OUTPUT);
pinMode (Bout, OUTPUT);
pinMode (Rout, OUTPUT);
pinMode (Yout, OUTPUT);
pinMode (Gin, INPUT);
pinMode (Bin, INPUT);
pinMode (Rin, INPUT);
pinMode (Yin, INPUT);

randomSeed(analogRead(A0)); /*Random Number Generator lights LEDs in pseudo-random sequence based on
 Analog signal noise from unconnected pin A0*/ 
}

void loop() {
  // put your main code here, to run repeatedly:
ginState = digitalRead(Gin);
goutState = digitalRead (Gout);
binState = digitalRead (Bin);
boutState = digitalRead (Bout);
rinState = digitalRead (Rin);
routState = digitalRead (Rout);
yinState = digitalRead (Yin);
youtState = digitalRead (Yout);

digitalWrite = random();



}

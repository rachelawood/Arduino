//declare any constants
//these never change
int buttonPin = 2;

int pushed = 3;
int released = 4;

//declare any variables
int buttonState;

void setup() {
  // put your setup code here, to run once:

  //set pinmodes in setup
  pinMode(buttonPin, INPUT);

  //set output LEDs
  pinMode(pushed, OUTPUT);
  pinMode(released, OUTPUT);

  //initialize serial communication
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

if(buttonState ==1){
  digitalWrite(pushed, HIGH);
  digitalWrite(released, LOW);
}

else {
  digitalWrite(released, HIGH);
  digitalWrite(pushed, LOW);
}

  Serial.println(buttonState);

}

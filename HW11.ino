int currentStep = 0;
bool correct = true;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
int button1 = digitalRead(D2);
int button2 = digitalRead(D6);
int potantialVal = analogRead(A3);
Serial.println("currentStep");
Serial.println(currentStep);
Serial.println(button1);
Serial.println(button2);
Serial.println(potantialVal);
if(button1 == HIGH)
{
  if (currentStep == 0 || currentStep == 3) {
  } else {
    // password incorrect
    correct = false;
  }
  currentStep = currentStep + 1;
}
else if(button2 == HIGH)
{
  if (currentStep == 1) {
  } else {
    // password incorrect
    correct = false;
  }
  currentStep = currentStep + 1;
}
else if(potantialVal > 4000)
{
  if (currentStep == 2) {
    currentStep = currentStep + 1;
  }
}

Serial.println(correct);
if (currentStep == 4) {
  if (correct) {
    digitalWrite(5, HIGH);
    delay(2000);
    digitalWrite(5, LOW);
  } else {
    digitalWrite(3, HIGH);
    delay(2000);
    digitalWrite(3, LOW);
  }
  
  currentStep = 0;
  correct = true;
}
delay(500);
}

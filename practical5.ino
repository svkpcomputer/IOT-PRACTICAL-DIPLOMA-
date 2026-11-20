const int pirPin = 2;
const int relayPin = 8;

void setup()
{
  pinMode(pirPin, INPUT);
  pinMode(relayPin, OUTPUT);

  digitalWrite(relayPin, LOW);

  Serial.begin(9600);
}

void loop()
{
  int motion = digitalRead(pirPin);

  if (motion == HIGH)
  {
    Serial.println("Motion Detected");
    digitalWrite(relayPin, HIGH);   // Relay ON
  }
  else
  {
    Serial.println("No Motion");
    digitalWrite(relayPin, LOW);    // Relay OFF
  }

  delay(200);
}
int sensorPin = A2;
int sesorValue;
int limit = 300;

void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
int sensorValue = analogRead (sensorPin);
Serial.println("Analog Value : ");
Serial.println(sensorValue);
if (sensorValue<limit){
  Serial.println("LOW");
  digitalWrite(13, HIGH);
}
else {
  digitalWrite(13,LOW);
}
delay(1000);
}

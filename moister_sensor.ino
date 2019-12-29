#define sensorPin A2
#define waterPin A1
#define limit 300
#define waterdelay 750

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  int sensorValue = analogRead (sensorPin);
  Serial.println("Analog Value : ");
  Serial.println(sensorValue);
  if (sensorValue<limit){
    digitalWrite(13, HIGH);
    digitalWrite(waterPin, HIGH);
    Serial.println("Waterpump running");
    delay(waterdelay);
    digitalWrite(waterPin, LOW);
    Serial.println("Waterpump not running");
}
delay(5000);
}

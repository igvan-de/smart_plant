#define sensorPin A2
#define waterPin 3
#define limit 300
#define waterdelay 2000
#define sensordelay 4000

void setup()
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(waterPin, OUTPUT);
}

void loop()
{
  int sensorValue = analogRead (sensorPin);
  Serial.println("Analog Value : ");
  Serial.println(sensorValue);
  if (sensorValue<limit){
    digitalWrite(waterPin, LOW);
    Serial.println("Waterpump running");
    delay(waterdelay);
    digitalWrite(waterPin, HIGH);
    Serial.println("Waterpump not running");
}
delay(sensordelay);
}

int signal = A0;
int phototransistorValue = 0;
void setup()
{
  Serial.begin(9600);          
  pinMode(signal, INPUT);
}
void loop()
{
  delay(500);
  phototransistorValue = analogRead(signal);
  Serial.println(phototransistorValue);
  delay(500);

if (phototransistorValue < 20) {
    Serial.println("I detected Black");
  }
  
 else if (phototransistorValue > 110) {
    Serial.println("I detected White");
  }
  else if (phototransistorValue >= 65 && phototransistorValue < 80) {
    Serial.println("I detected Green");
  }
}

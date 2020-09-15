#define grueneLED 3

void setup() {
  digitalWrite (grueneLED, OUTPUT)

}

void loop()
{
  digitalWrite(grueneLED, HIGH)
  delay(1000)
  digitalWrite(grueneLED, LOW)
  delay(1000)
  digitalWrite(grueneLED, HIGH)
  delay(1000)
  digitalWrite(grueneLED, LOW)
  delay(1000)
}


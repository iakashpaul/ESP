int zpin = A3;
int ypin = A4;
int xpin = A5;

// These are only used if you're plugging the ADXL335 (on the
// Adafruit breakout board) directly into the analog input pins
// of your Arduino. See comment below.
int vinpin = A0;
int voutpin = A1;
int gndpin = A2;

void setup() {
  Serial.begin(115200);

  // Uncomment the following lines if you're using an ADXL335 on an
  // Adafruit breakout board (https://www.adafruit.com/products/163)
  // and want to plug it directly into (and power it from) the analog
  // input pins of your Arduino board.
//  pinMode(vinpin, OUTPUT); digitalWrite(vinpin, HIGH);
//  pinMode(gndpin, OUTPUT); digitalWrite(gndpin, LOW);
//  pinMode(voutpin, INPUT);
  
  pinMode(xpin, INPUT);
  pinMode(ypin, INPUT);
  pinMode(zpin, INPUT);
}

void loop() {
  Serial.print(analogRead(xpin)); Serial.print("\t");
  Serial.print(analogRead(ypin)); Serial.print("\t");
  Serial.print(analogRead(zpin)); Serial.println();
  delay(10);
}

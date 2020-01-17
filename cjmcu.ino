

void setup() {

pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
Serial.begin(9600);
Serial.println("initialization") ;

}

void loop() {
// read the value from the sensor:

float NH3_raw = analogRead(A0);//nh3
float NO2_raw = analogRead(A1); //no2 
float CO_raw = analogRead(A2); //co

float NH3 = map(NH3_raw,0,1023,1,500 );
float NO2 = 0.05+ A1*((10-0.05)/1023);
float CO = map(CO_raw,0,1023,1,1000 );


//Serial.println("co sensor value = " + String(sensorValue0)) ;
Serial.print("CO ppm = ") ;
Serial.println(CO_raw);

//Serial.println("no2 sensor value = " + String(sensorValue1)) ;
Serial.print("NO2 ppm = ") ;
Serial.println(NO2_raw);

//Serial.println("NH3 sensor value = " + String(sensorValue2)) ;
Serial.print("NH3 ppm = ") ;
Serial.println(NH3_raw);
delay(3000);

}

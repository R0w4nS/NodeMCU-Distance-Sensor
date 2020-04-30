const int trigPin = 5; //D1
const int echoPin = 4; //D2

//Pin D1 > TRIGGER
//Pin D2 > ECHO

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//Auth token for your project in the Blynk App.
char auth[] = "";

//Your WiFi credentials.
//Set password to "" for open networks.
char ssid[] = "WiFi SSID";
char pass[] = "WiFi Key";

long duration;
int distance;
int newval;

void setup() {
  Serial.begin (9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(trigPin, OUTPUT); //Initialise trigPin as an output
  pinMode(echoPin, INPUT); //Initialise echoPin as an input
}

void loop() {
  timer.run();
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  Blynk.virtualWrite(V1, distance);
  Blynk.run();
}

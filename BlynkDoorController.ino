#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define BLYNK_PRINT Serial

#define BLYNK_AUTH_TOKEN "N-KyckIYmHRsl8YVTLroSS2sMiA-VS2e"

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "TOTOLINK_1F";
char pass[] = "11223344";

BLYNK_WRITE(V0) {
  digitalWrite(D0, param.asInt());
}

BLYNK_WRITE(V1) {
  digitalWrite(D1, param.asInt());
}

BLYNK_WRITE(V2) {
  digitalWrite(D2, param.asInt());
}

BLYNK_WRITE(V3) {
  digitalWrite(D3, param.asInt());
}

void setup(){                                                
  Serial.begin(9600);
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop(){
  Blynk.run();
}

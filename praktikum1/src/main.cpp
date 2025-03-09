#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32


// Deklarasi pin LED
int lampu = 26;
int lampu1 = 25;
int lampu2 = 33;


void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Blinking LED");


    // Atur pin sebagai OUTPUT
    pinMode(lampu, OUTPUT);
    pinMode(lampu1, OUTPUT);
    pinMode(lampu2, OUTPUT);
}


void loop() {
    // Nyalakan kedua LED
    digitalWrite(lampu, HIGH);
    Serial.println("LED ON");
    delay(500); 

    digitalWrite(lampu1, HIGH);
    Serial.println("LED ON");
    delay(1000);

    digitalWrite(lampu2, HIGH);
    Serial.println("LED ON");
    delay(1500);


    digitalWrite(lampu, LOW);
    Serial.println("LED OFF");
    delay(1500); // Tunggu 1 detik

    digitalWrite(lampu1, LOW);
    Serial.println("LED OFF");
    delay(1000);

    digitalWrite(lampu2, LOW);
    Serial.println("LED OFF");
    delay(500);
}
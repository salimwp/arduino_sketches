/*
 * Since this application is common knownledge there is no license required.
 */

void setup() {
        Serial.begin(9600);
}

void loop() {
        int value = analogRead(A0);
        Serial.println(value);
        delay(1000);
}

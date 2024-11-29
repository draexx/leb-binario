// C++ code 
int leds[] = {5, 4, 3, 2}; 
// Pines de los LEDs 
int time_wait = 1000;

void setup() {
  for (int i = 0; i < 4; i++) { 
    pinMode(leds[i], OUTPUT); 
  } 
} 

void loop() {
  for (int i = 1; i <= 15; i++) {
    for (int j = 0; j < 4; j++) {
      digitalWrite(leds[j], (i >> j) & 1); 
    } 
    delay(time_wait);
  }
}

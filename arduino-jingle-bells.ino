int SONG = 6;
int GREEN = 7;
int ORANGE = 8;
int RED = 9;
int WHITE = 10;
int BLUE = 11;
int YELLOW = 12;
int GREEN2 = 13;

int interval = 200;
char notes[] = "EEEEEEEGCDE FFFFFEEEEDDEDG";
int duration[] = {1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};

void setup() {
  pinMode(SONG, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(ORANGE, OUTPUT);
  pinMode(WHITE, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN2, OUTPUT);
}

void loop() {
  for (int i = 0; i <= sizeof(notes) - 1; i++) {
    if (notes[i] == ' ') {
      delay(duration[i] * interval);
    } else {
      playToneAndLed(notes[i], duration[i] * interval);
    }
    delay((interval * 2)*duration[i]);
  }
}

void playToneAndLed(char note, int duration) {
  char notesName[] = { 'C', 'D', 'E', 'F', 'G', 'A', 'B' };
  int tones[] = { 261, 293, 329, 349, 392, 440, 494 };
  int leds[] = {GREEN, ORANGE, RED, WHITE, BLUE, YELLOW, GREEN2 };
  
  for (int i = 0; i <= sizeof(tones); i++) {
    if (note == notesName[i]) {
      tone(SONG, tones[i], duration);
      digitalWrite(leds[i], HIGH);
      delay(duration);
      digitalWrite(leds[i], LOW);
    }
  }
}

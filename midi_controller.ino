#include <Keypad.h>
#include "Keypad.h"
const byte RADKY = 4; // čtyří řádky
const byte SLOUPCE = 4; //čtyři sloupce

char znaky[RADKY][SLOUPCE] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte radkyPiny[RADKY] = {5, 4, 3, 2}; 
byte sloupcePiny[SLOUPCE] = {9, 8, 7, 6}; 

Keypad keypad = Keypad(makeKeymap(znaky), radkyPiny, sloupcePiny, RADKY, SLOUPCE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char znak = keypad.getKey();

  if (znak){
    //Serial.println(znak);
      switch (znak) {
        case '1':
          Serial.write(B10010000);
          Serial.write(1);
          Serial.write(100);
          break;
        case '2':
          Serial.write(B10010000);
          Serial.write(2);
          Serial.write(100);
          break;
        case '3':
          Serial.write(B10010000);
          Serial.write(3);
          Serial.write(100);
          break;
        case 'A':
          Serial.write(B10010000);
          Serial.write(4);
          Serial.write(100);
          break;
        case '4':
          Serial.write(B10010000);
          Serial.write(5);
          Serial.write(100);
          break;
        case '5':
          Serial.write(B10010000);
          Serial.write(6);
          Serial.write(100);
          break;
        case '6':
          Serial.write(B10010000);
          Serial.write(7);
          Serial.write(100);
          break;
        case 'B':
          Serial.write(B10010000);
          Serial.write(8);
          Serial.write(100);
          break;
       case '7':
          Serial.write(B10010000);
          Serial.write(9);
          Serial.write(100);
          break;
        case '8':
          Serial.write(B10010000);
          Serial.write(10);
          Serial.write(100);
          break;
        case '9':
          Serial.write(B10010000);
          Serial.write(11);
          Serial.write(100);
          break;
        case 'C':
          Serial.write(B10010000);
          Serial.write(12);
          Serial.write(100);
          break;
        case '*':
          Serial.write(B10010000);
          Serial.write(13);
          Serial.write(100);
          break;
        case '0':
          Serial.write(B10010000);
          Serial.write(14);
          Serial.write(100);
          break;
        case '#':
          Serial.write(B10010000);
          Serial.write(15);
          Serial.write(100);
          break;
        case 'D':
          Serial.write(B10010000);
          Serial.write(16);
          Serial.write(100);
          break;
    }
  }
}

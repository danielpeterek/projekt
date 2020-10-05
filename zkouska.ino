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
    Serial.println(znak);
      
  }
}

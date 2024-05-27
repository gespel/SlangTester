#include "GouodModulesLib/slang.h"

void setup() {
    Serial.begin(9600);
    Serial.println();
    Slang s;
    s.tokenize("Sten ist cool!");
}

void loop() {
  
}




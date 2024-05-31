#include "GouodModulesLib/slang.h"



void setup() {
    Serial.begin(9600);
    Serial.println();
}

void loop() {
    Slang s;
    s.tokenize("Sten ist cool fn return fn fn return sten fn sten return");
    s.printTokens();
}




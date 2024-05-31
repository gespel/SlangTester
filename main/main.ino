#include "GouodModulesLib/slang.h"



void setup() {
    Serial.begin(9600);
    Serial.println();
    Slang s;
    s.tokenize("sten fn return sten sawsynth sinesynth");
    s.printTokens();
}

void loop() {
    
}




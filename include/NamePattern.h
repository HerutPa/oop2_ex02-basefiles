#pragma once
#include <iostream>
#include "Pattern.h"


class NamePattern : public Pattern {
public:
   static std::string getPattern() const override {
        // דוגמה לתבנית לשם
        return "[A-Za-z\\s]+"; // דוגמה לתבנית לשם מתאימה לאותיות באנגלית
    }
};
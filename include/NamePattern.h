#pragma once
#include <iostream>


class NamePattern
{

public:
   static std::string getPattern()
   {
        // דוגמה לתבנית לשם
        return "[A-Za-z\\s]+"; // דוגמה לתבנית לשם מתאימה לאותיות באנגלית
   }
};
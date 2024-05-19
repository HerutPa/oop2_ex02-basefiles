#pragma once
#include <iostream>


class NamePattern
{

public:
   static std::string getPattern()
   {
        return "[A-Za-z\\s]+"; //
   }
};
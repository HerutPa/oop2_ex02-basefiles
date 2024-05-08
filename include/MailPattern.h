#pragma once
#include <iostream>





class MailPattern
{

public:
    static std::string getPattern()
    {
        // דוגמה לתבנית לכתובת דוא"ל
        return "[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}"; // דוגמה לתבנית לכתובת דוא"ל
    }
};
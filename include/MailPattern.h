#pragma once
#include <iostream>

class MailPattern
{

public:
    static std::string getPattern()
    {
        return "[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}"; // exmple for mail.
    }
};
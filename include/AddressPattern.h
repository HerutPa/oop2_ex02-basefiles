#pragma once
#include <iostream>
#include "Pattern.h"



class AddressPattern : public Pattern {
public:
    static std::string getPattern() const override {
        // דוגמה לתבנית לכתובת
        return ".+"; // דוגמה לתבנית לכתובת, כאן אני מניח שכל תו חוקי
    }
};

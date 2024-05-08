#pragma once
#include "Validators.h"
#include <string>
#include <regex>



class RegexValidator : public Validators<std::string>
{
public:
    RegexValidator(const std::string& patternStr) : Validators("error "/*check*/), pattern(patternStr) {}

    bool checkValidation(const std::string& val) override { return std::regex_match(val, pattern); };
   


private:
    std::regex pattern;
};


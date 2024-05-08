#pragma once
#include "Validators.h"
#include <string>
#include <regex>



class RegexValidator : public Validators<std::string>
{


public:
    RegexValidator(const std::string& patternStr) : pattern(patternStr) {}

    bool validate(const std::string& input) const
    {
        return std::regex_match(input, pattern);
    }

private:
    std::regex pattern;
};




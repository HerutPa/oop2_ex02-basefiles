#pragma once
#include "Validators.h"


class RegexValidator 
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




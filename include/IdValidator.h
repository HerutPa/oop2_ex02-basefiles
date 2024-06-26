#pragma once
#include <cstdint>

class IdValidator : public Validators<uint32_t>
{
public:
    IdValidator();
    bool checkValidation(const uint32_t& id)  override;
    const int uintLen(uint32_t) const;

private:

};

inline IdValidator::IdValidator()
    :Validators("Wrong control digit")
{
}

const int IdValidator::uintLen(uint32_t num) const
{
    uint32_t tmp = num;
    int len = 0;

    while (tmp != 0) {
        tmp = tmp / 10;
        ++len;
    }
    return len;
}

bool IdValidator::checkValidation(const uint32_t& number)
{
    int sum = 0, incNum;
    uint32_t numArr[9] = { 0 };
    uint32_t tmp = number;

    // check the length of the number
    if (uintLen(number) != 9) {
        return false;
    }

    // convert the number to an array for easy check later
    for (int i = 8; i >= 0; i--) {
        numArr[i] = tmp % 10;
        tmp = tmp / 10;
    }

    // validate the id number
    for (int i = 0; i < 9; i++) {
        incNum = numArr[i] * ((i % 2) + 1);
        sum += (incNum > 9) ? incNum - 9 : incNum;
    }

    return (sum % 10 == 0);
}

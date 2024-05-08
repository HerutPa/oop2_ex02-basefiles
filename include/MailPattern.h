#pragma once
#include <iostream>
#include "Pattern.h"





class MailPattern : public Pattern {
public:
    static std::string getPattern() const override {
        // ����� ������ ������ ���"�
        return "[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}"; // ����� ������ ������ ���"�
    }
};
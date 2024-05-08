#pragma once
#include <iostream>
#include "Pattern.h"


class NamePattern : public Pattern {
public:
   static std::string getPattern() const override {
        // ����� ������ ���
        return "[A-Za-z\\s]+"; // ����� ������ ��� ������ ������� �������
    }
};
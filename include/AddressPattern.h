#pragma once
#include <iostream>
#include "Pattern.h"



class AddressPattern : public Pattern {
public:
    static std::string getPattern() const override {
        // ����� ������ ������
        return ".+"; // ����� ������ ������, ��� ��� ���� ��� �� ����
    }
};

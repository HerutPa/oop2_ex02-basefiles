#pragma once 
#include <string>

const int INPOTION = 5;

class IncomeOptions
{
public:
	const int getSize() const { return INPOTION; }
	const std::string getVal(int index) const { return m_incomeOptions[index]; }
	int Min() const { return 1; };
	int Max() const { return INPOTION; };

private:
	std::string m_incomeOptions[INPOTION] = { "Rome ", "Prague " ,"New York ",  "India ", "Thailand" };

};


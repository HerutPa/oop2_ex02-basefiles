#pragma once 
#include <string>
const int INCOMES = 6;
class OtherIncomes
{
public:
	const int getSize() const { return INCOMES; }
	const std::string getVal(int index) const { return m_otherIncomes[index]; }
	const int Min() const { return 1; };
	const int Max() const { return INCOMES; };

private:
	std::string m_otherIncomes[INCOMES] = { "I don't have any additional salary ", "Monthly salary " ,"Salary for an additional position "
	, "Part-time salary ", "Allwance ", "Stpiend "};

};


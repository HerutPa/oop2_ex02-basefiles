#pragma once 
const int INCOMES = 3;
class OtherIncomes
{
public:
	const int getSize() const { return INCOMES; }
	const std::string getVal(int index) const { return m_otherIncomes[index]; }
	const int Min() const { return 1; };
	const int Max() const { return INCOMES; };

private:
	std::string m_otherIncomes[INCOMES] = { "Morning/Noon ", "After-Noon/Evening " ,"Night" };

};


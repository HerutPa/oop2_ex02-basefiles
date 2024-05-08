#pragma once
#include <string>

const int TAX = 3;
class TaxCredits
{
public:
	const int getSize() const { return TAX; }
	const std::string getVal(int index) const { return m_taxCredits[index]; }
	const int Min() const { return 1; };
	const int Max() const { return TAX; };

private:
	std::string m_taxCredits[TAX] = { "I don't have any additional salary ", "I would like to receive credit points against this income " 
		,"I am not requesting credit points for any other income " };

};

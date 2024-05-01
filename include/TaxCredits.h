#pragma once
const int TAX = 3;
class TaxCredits
{
public:
	const int getSize() const { return TAX; }
	const std::string getVal(int index) const { return m_taxCredits[index]; }
	const int Min() const { return 1; };
	const int Max() const { return TAX; };

private:
	std::string m_taxCredits[TAX] = { "None ", "Basic " ,"Extended" };

};

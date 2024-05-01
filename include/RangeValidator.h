#pragma once
#include "Validators.h"

template <class T>
class RangeValidator : public Validators <T>
{
public:
	RangeValidator(int, int);
	bool checkValidation(const T&) override;

private:
	int m_max, m_min;
};

template<class T>
inline RangeValidator<T>::RangeValidator(int min, int max)
	:Validators<T>("Out of range"), m_max(max), m_min(min)
{
}


template<typename T>
bool RangeValidator<T>::checkValidation(const T& value)
{
	bool flag = (value >= m_min && value <= m_max);
	return flag;
}

template<typename T>
bool operator >= (const T& val1, const int& val2)
{
	return val1.getValue() >= val2;
}

template<typename T>
bool operator <= (const T& val1, const int& val2)
{
	return val1.getValue() <= val2;
}
#pragma once
#include "Validators.h"
#include "Date.h"
#include "ValuesToNames.h"



template <class T>
class RangeValidator : public Validators <T>
{
public:
	RangeValidator(const T&, const T&);
	bool checkValidation(const T&) override;

private:
	T m_max, m_min;
};

template<class T>
inline RangeValidator<T>::RangeValidator(const T& min, const T& max)
	:Validators<T>("Out of range"), m_max(max), m_min(min)
{
}


template<typename T>
bool RangeValidator<T>::checkValidation(const T& value)
{
	bool flag = (value >= m_min && value <= m_max);
	return flag;
}
;
template<typename T>
bool RangeValidator<ValuesToNames<T>>::checkValidation(const T& value)
{
	bool flag = (value >= m_min && value <= m_max);
	return flag;
}


template<typename T>
bool operator >= (const T& val1, const T& val2)
{
	return val1 >= val2;
}

template<typename T>
bool operator <= (const T& val1, const T& val2)
{
	return val1 <= val2;
}
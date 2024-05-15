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

    bool checkValidation(const ValuesToNames<T>&);

private:
    T m_max, m_min;
};

template<class T>
inline RangeValidator<T>::RangeValidator(const T& min, const T& max)
    :Validators<T>("Out of range"), m_max(max), m_min(min)
{
}

template<>
inline RangeValidator<Date>::RangeValidator(const Date& min, const Date& max)
    : Validators<Date>("Out of range"), m_max(max), m_min(min)
{
    // implementation of the constructor
}

template<typename T>
bool RangeValidator<T>::checkValidation(const T& value)
{
    bool flag = (value >= m_min && value <= m_max);
    return flag;
}

template<class T>
bool RangeValidator<T>::checkValidation(const ValuesToNames<T>& value)
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

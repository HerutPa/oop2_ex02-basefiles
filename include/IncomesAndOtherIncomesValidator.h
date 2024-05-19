#pragma once
#include "FormValidator.h"
#include "memory.h"

template <class T1, class T2>
class IncomesAndOtherIncomesValidator : public FormValidator     
{
public:
	IncomesAndOtherIncomesValidator(const T1*, const T2*);
	const bool checkValidation() override;

private:

};

template<class T1, class T2>
inline IncomesAndOtherIncomesValidator<T1, T2>::IncomesAndOtherIncomesValidator(const T1* ,const T2* )
{
}

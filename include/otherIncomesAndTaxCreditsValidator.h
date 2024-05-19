#pragma once
#include "FormValidator.h"

template <class T1, class T2>
class OtherIncomesAndTaxCreditsValidator : public FormValidator
{
public:
	OtherIncomesAndTaxCreditsValidator(T1*, T2*);
	const bool checkValidation() override;

private:

};

template<class T1, class T2>
inline OtherIncomesAndTaxCreditsValidator<T1, T2>::OtherIncomesAndTaxCreditsValidator(T1* , T2* )
{
}

#pragma once
#include "FormValidator.h"

template <class T1, class T2>
class otherIncomesAndTaxCreditsValidator : public FormValidator
{
public:
	otherIncomesAndTaxCreditsValidator(T1*, T2*);
	const bool checkValidation() override;

private:
	T1* m_destination;
	T2* m_wifi;
};

template<class T1, class T2>
inline otherIncomesAndTaxCreditsValidator<T1, T2>::otherIncomesAndTaxCreditsValidator(T1* destination, T2* wifi)
	:m_destination(destination), m_wifi(wifi)
{
}

template<class T1, class T2>
inline const bool otherIncomesAndTaxCreditsValidator<T1, T2>::checkValidation()
{
	//get the integer value from T
	int wifi = m_wifi->getInfo().getValue();
	int destination = m_destination->getInfo().getValue();

	//validate the wifi-location 
	switch (wifi)
	{
	case NONE:
	{
		return true;
		break;
	}
	case BASIC:
	{
		if (destination == NEW_YORK)
		{
			return false;
		}
		break;
	}

	case EXTENDED:
	{
		if (destination == INDIA || destination == THAILAND)
		{
			return false;
		}
		break;
	}
	default:
		return true;
		break;
	}

	return true;

}

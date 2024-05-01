#pragma once
#include "FormValidator.h"

template <class T1, class T2>
class IncomesAndOtherIncomesValidator : public FormValidator
{
public:
	IncomesAndOtherIncomesValidator(T1*, T2*);
	const bool checkValidation() override;

private:
	T1* m_destination;
	T2* m_time;
};

template<class T1, class T2>
inline IncomesAndOtherIncomesValidator<T1, T2>::IncomesAndOtherIncomesValidator(T1* destination, T2* time)
	:m_destination(destination), m_time(time)
{
}

template<class T1, class T2>
inline const bool IncomesAndOtherIncomesValidator<T1, T2>::checkValidation()
{
	//get the integer value from T
	int time = m_time->getInfo().getValue();
	int destination = m_destination->getInfo().getValue();

	//validate the time-location 
	switch (time)
	{
	case MORNING_NOON:
	{
		if (destination == INDIA || destination == THAILAND)
		{
			return false;
		}
		break;
	}
	case AFTER_NOON_EVENING:
	{
		return true;
		break;
	}

	case NIGHT:
	{
		if (destination == ROME || destination == PRAGUE)
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

#pragma once
#include <string>

template <class T>
class Validators
{
public:
	Validators(std::string);
	virtual bool checkValidation(const T& val) = 0;
	const std::string getErrorMsg() const;

private:
	std::string m_error_msg;

};

template<class T>
inline Validators<T>::Validators(std::string error_msg)
	:m_error_msg(error_msg)
{
}

template<class T>
inline const std::string Validators<T>::getErrorMsg() const
{
	return m_error_msg;
}


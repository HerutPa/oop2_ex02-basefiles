#pragma once
#include <string>
#include <iostream>
#include "BaseField.h"
#include "Validators.h"


template <class T>
class Field : public BaseField
{
public:
	Field(std::string);
	~Field() = default;
	void addValidator(Validators<T>*);
	void readData() override;
	bool fieldIsValid() override;
	void printField(std::ostream&) override;
	bool getValid() const override;
	void setValid() override;
	const T getInfo();


private:
	std::string  m_question;
	T m_info;
	Validators<T>* m_validator;
	bool m_valid = false;
	bool m_print_error = false;

};

template<class T>
inline Field<T>::Field(std::string question)
	:m_question(question)
{
}

template<class T>
inline void Field<T>::addValidator(Validators<T>* p)
{
	m_validator = p;
}

template<class T>
inline void Field<T>::readData()
{
	std::cout << m_question << std::endl;
	std::cin >> m_info;
	//std::cout << m_info << std::endl;
}


template<class T>
inline bool Field<T>::fieldIsValid()
{
	m_valid = m_validator->checkValidation(m_info);
	m_print_error = m_valid;
	return m_valid;
}

template<class T>
inline void Field<T>::printField(std::ostream& os)
{
	os << "-------------------------------------------------------------------------\n";
	os << m_question << " = " << m_info;
	if (!m_print_error)
	{
		os << "\t\t" << m_validator->getErrorMsg();
	}
	os << "\n-------------------------------------------------------------------------\n";
}

template<class T>
inline bool Field<T>::getValid() const
{
	return m_valid;
}

template<class T>
inline void Field<T>::setValid()
{
	m_valid = false;
}

template<class T>
inline const T Field<T>::getInfo()
{
	return m_info;
}


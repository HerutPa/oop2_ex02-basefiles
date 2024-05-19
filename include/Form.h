#pragma once
#include <vector>
#include <memory>
#include <string>
# include <iostream>
#include "Field.h"
#include "FormValidator.h"

enum Fields { NAME, ID, YEAR};

//class that defind all the field to one form
class Form
{
public:
	void addField(BaseField*);
	void addValidator(FormValidator*);
	const bool validateForm();
	void fillForm();
	const int getFieldsNum() const;
	BaseField* getField(int) const;


private:
	std::vector<BaseField*> m_basefields;
	std::vector<FormValidator*> m_validators;
};

std::ostream& operator << (std::ostream& os, Form& form);
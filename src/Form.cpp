#pragma once
#include <string>
#include "Form.h"

void Form::addField(BaseField* field)
{
	m_basefields.push_back(field);
}

void Form::addValidator(FormValidator* validator)
{
	m_validators.push_back(validator);
}

const bool Form::validateForm()
{
	// flag that indicate if all form is valid
	bool valid = true;
	for (int field = 0; field < m_basefields.size(); field++)
	{
		if (!m_basefields[field]->fieldIsValid())
		{
			valid = false;
		}
	}
	//only if fields valid check
	if (valid)
	{

	}
	return valid;
}

void Form::fillForm()
{
	for (auto field : m_basefields)
		if (!field->getValid())
			field->readData();
}

const int Form::getFieldsNum() const
{
	return m_basefields.size();
}

BaseField* Form::getField(int field) const
{
	return m_basefields[field];
}


std::ostream& operator<<(std::ostream& os, Form& form)
{
	for (auto field = 0; field < form.getFieldsNum(); field++)
	{
		form.getField(field)->printField(os);
	}
}

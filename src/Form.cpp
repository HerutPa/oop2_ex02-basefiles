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
	//only if fields valid check the combinations
	if (valid)
	{
		m_time_destination_valid = m_validators[0]->checkValidation();
		if (!m_time_destination_valid)
		{
			valid = false;
			m_basefields[TIME]->setValid();
			m_basefields[DESTINATION]->setValid();
		}
		m_wifi_destination_valid = m_validators[1]->checkValidation();
		if (!m_wifi_destination_valid)
		{
			valid = false;
			m_basefields[WIFI_BUNDLE]->setValid();
			m_basefields[DESTINATION]->setValid();
		}
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

const bool Form::getTimeDest() const
{
	return m_time_destination_valid;
}

const bool Form::getWifiDest() const
{
	return m_wifi_destination_valid;
}

std::ostream& operator<<(std::ostream& os, Form& form)
{
	for (auto field = 0; field < form.getFieldsNum(); field++)
	{
		form.getField(field)->printField(os);
	}
	if (!form.getTimeDest())
	{
		os << "Destination and flight time don't match\n";
	}
	if (!form.getWifiDest())
	{
		os << "Destination and WIFI bundle don't match\n";
	}
	return os;
}

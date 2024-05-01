#pragma once
#include <vector>
#include <memory>
#include <string>
# include <iostream>
#include "Field.h"
#include "FormValidator.h"

enum Fields { NAME, ID, YEAR, DESTINATION, TIME, WIFI_BUNDLE };

class Form
{
public:
	void addField(BaseField*);
	void addValidator(FormValidator*);
	const bool validateForm();
	void fillForm();
	const int getFieldsNum() const;
	BaseField* getField(int) const;
	const bool getTimeDest() const;
	const bool getWifiDest() const;


private:
	std::vector<BaseField*> m_basefields;
	std::vector<FormValidator*> m_validators;
	bool m_time_destination_valid = true;
	bool m_wifi_destination_valid = true;

};

std::ostream& operator << (std::ostream& os, Form& form);
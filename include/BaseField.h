#pragma once
#include <iostream>


class BaseField
{
public:
	virtual void readData() = 0;
	virtual bool fieldIsValid() = 0;
	virtual void printField(std::ostream&) = 0;
	virtual bool getValid() const = 0;
	virtual void setValid() = 0;

private:

};

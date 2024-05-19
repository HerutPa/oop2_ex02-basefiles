#pragma once
#include <iostream>

// A parent class that inherits the functions for the fields class
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

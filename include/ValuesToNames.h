#pragma once
#include <iostream>
#include <string>

template <class T >
class ValuesToNames
{
public:
	const std::string valuesAndNames(); // prints the message of the num and the value 
	const std::string GetOption();
	void SetOption(int);
	const int getValue() const;
	const bool inRange();

	friend bool operator>=(const int val1, const T& val2);
	friend bool operator<=(const T& val1, const T& val2);


private:
	T m_name;
	int m_value = 0; //the option that the user choose
};


template<class T>
inline bool operator>=(const int val1, const T& val2)
{
	return (val1 >= val2.Min());

}

template<class T>
inline const std::string ValuesToNames<T>::valuesAndNames()
{
	std::string string_msg = "(";
	for (int index = 0; index < m_name.getSize(); index++)
	{
		string_msg += std::to_string(index + 1) + " -" + m_name.getVal(index);
	}
	string_msg += ")";
	return string_msg;
}

template<class T>
inline const std::string ValuesToNames<T>::GetOption()
{
	return m_name.getVal(m_value - 1);
}

template<class T>
inline void ValuesToNames<T>::SetOption(int value)
{
	m_value = value;
}

template<class T>
inline const int ValuesToNames<T>::getValue() const
{
	return m_value;
}

template<class T>
inline const bool ValuesToNames<T>::inRange()
{
	return m_value <= m_name.Max() && m_value >= m_name.Min();
}


template <class T >
std::ostream& operator << (std::ostream& os, ValuesToNames<T>& val2name)
{
	//prints the value only if in range
	if (val2name.inRange())
		os << val2name.GetOption();
	else
		os << val2name.getValue();
	return os;
}


template <class T >
std::istream& operator >> (std::istream& is, ValuesToNames<T>& val2name)
{
	int num;
	is >> num;
	val2name.SetOption(num);
	return is;
}
#pragma once
#include <iostream>

class Date
{
public:
    Date(int year, int month, int day) :m_year(year), m_month(month), m_day(day) {}
    Date() = default;
    
    int getYear() const { return m_year; }

private:
	int m_year;
	int m_month;
	int m_day;


//opertor's

    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    friend std::istream& operator>>(std::istream& is, Date& date);
    friend Date operator-(const Date& date1, const int date2);
    friend bool operator>=(const Date& date1, const Date& date2);
    friend bool operator<=(const Date& date1, const Date&date2);

};


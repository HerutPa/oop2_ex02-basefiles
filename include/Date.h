#pragma once
#include <iostream>

class Date
{
public:
    Date(int year, int month, int day) :m_year(year), m_month(month), m_day(day) {}
    friend std::ostream& operator<<(std::ostream& os, const Date& date);



private:
	int m_year;
	int m_month;
	int m_day;


//opertor's

    //    // שימוש באופרטורי החיבור והחיסור
    //std::cout << "x + y = " << x + y << std::endl;
    //std::cout << "x - y = " << x - y << std::endl;

    //// שימוש באופרטורי ההשוואה
    //std::cout << "x > y: " << (x > y) << std::endl;
    //std::cout << "x < y: " << (x < y) << std::endl;
    //std::cout << "x >= y: " << (x >= y) << std::endl;
    //std::cout << "x <= y: " << (x <= y) << std::endl;

 


};
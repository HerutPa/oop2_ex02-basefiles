#pragma once
#include "Date.h"

std::ostream& operator<<(std::ostream& os, const Date& date)
{
    os << date.m_year << "-" << date.m_month << "-" << date.m_day;
    return os;
}

std::istream& operator>>(std::istream& is, Date& date)
{
    is >> date.m_year >> date.m_month >> date.m_day;
    return is;
}

Date operator-(const Date& date1, const int date2)
{
    int yearDiff = date1.m_year - date2;
    //int monthDiff = date1.m_month - date2;
    //int dayDiff = date1.m_day - date2;

    return Date(yearDiff, date1.m_month, date1.m_day );
}

bool operator>=(const Date& date1, const Date& date2)
{
    return (date1.getYear() >= date2.getYear() && date1.m_month >= date2.m_month &&
                                                  date1.m_day >= date2.m_day);
}

bool operator<=(const Date& date1, const Date& date2)
{
    return (date1.getYear() <= date2.getYear() && date1.m_month <= date2.m_month &&
                                                  date1.m_day <= date2.m_day);
}



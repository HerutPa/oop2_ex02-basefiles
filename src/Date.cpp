#pragma once
#include "Date.h"

// מימוש של האופרטור <<
std::ostream& operator<<(std::ostream& os, const Date& date)
{
    os << date.m_year << "-" << date.m_month << "-" << date.m_day;
    return os;
}

// מימוש של האופרטור >>
std::istream& operator>>(std::istream& is, Date& date)
{
    is >> date.m_year >> date.m_month >> date.m_day;
    return is;
}

Date operator-(const Date& date1, const Date& date2) {
    int yearDiff = date1.m_year - date2.m_year;
    int monthDiff = date1.m_month - date2.m_month;
    int dayDiff = date1.m_day - date2.m_day;

    // יצירת אובייקט חדש של Date עם ההפרשים בין התאריכים
    return Date(yearDiff, monthDiff, dayDiff);
}


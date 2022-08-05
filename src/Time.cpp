// Time.cpp - Time class implementation.

#include "time.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------//
//A default constructor
Time::Time()
{
    hour = 0;
    minute = 0;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A non default constructor
Time::Time(unsigned h, unsigned m)
{
    hour = h;
    minute = m;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A getter for hour
unsigned Time::GetHour()
{
    return hour;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A getter for minute
unsigned Time::GetMinute()
{
    return minute;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A setter for hour
void Time::SetHour(unsigned h)
{
    if (h >= 0 && h < 24)
    {
        hour = h;
    }
    else
    {
        hour = 0;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A setter for minute
void Time::SetMinute(unsigned m)
{
    if (m >= 0 && m < 60)
    {
        minute = m;
    }
    else
    {
        minute = 0;
    }
}

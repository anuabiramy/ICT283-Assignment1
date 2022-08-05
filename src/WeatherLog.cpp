// WeatherLog.cpp - WeatherLog class implementation.

#include "WeatherLog.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------//
//A default constructor
WeatherLog::WeatherLog()
{
    speed = 0;
    ambientT = 0;
    solarR = 0;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A setter for speed
bool WeatherLog::SetSpeed(float s)
{
    if (s > 0)
    {
        speed = s;
        return true;
    }
    else
    {
        speed = 0;
        return false;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A getter for speed
float WeatherLog::GetSpeed()
{
    return speed;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A Getter for date object
Date& WeatherLog::GetDate()
{
    return d;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A getter for time object
Time& WeatherLog::GetTime()
{
    return t;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A setter for ambient temperature
bool WeatherLog::SetAmbientTemp(float a)
{
    ambientT = a;
    return true;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A setter for solar radiation
bool WeatherLog::SetSolarRadiation(float sr)
{
    if (sr > 0)
    {
        solarR = sr;
        return true;
    }
    else
    {
        solarR = 0;
        return false;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A getter for ambient temperature
float WeatherLog::GetAmbientTemp()
{
    return ambientT;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// A getter for solar radiation
float WeatherLog::GetSolarRadiation()
{
    return solarR;
}

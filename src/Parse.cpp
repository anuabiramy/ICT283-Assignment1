//Parse.cpp - Parse class implementation

#include "Parse.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// The default constructor
Parse::Parse()
{
    day = 0;
    month = 0;
    year = 0;
    hour = 0;
    minutes = 0;
    windS = 0;
    solarR = 0;
    ambientT = 0;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that reads from the line and push into the member variables
void Parse::ParseLog(string line)
{
    stringstream ss(line);
    string d;
    string t;
    string skip;
    string wS;
    string sR;
    string aT;
    getline(ss, d, ' ');
    ParseDate(d);
    getline(ss, t, ',');
    ParseTime(t);
    for(int i = 0; i < 9; i++)
    {
        getline(ss, skip, ',');
    }
    getline(ss, wS, ',');
    windS = StringToInt(wS);
    getline(ss, sR, ',');
    solarR = StringToFloat(sR);
    for (int i = 0; i < 5; i++)
    {
        getline(ss, skip, ',');
    }
    getline(ss, aT, '\n');
    ambientT = StringToFloat(aT);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that takes a string and breaks it into date related variables
void Parse::ParseDate(string date)
{
    string d, m, y;
    stringstream ssdate(date);
    getline(ssdate, d, '/');
    day = StringToInt(d);
    getline(ssdate, m, '/');
    month = StringToInt(m);
    getline(ssdate, y, ' ');
    year = StringToInt(y);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that takes a string and breaks it into time related variables
void Parse::ParseTime(string time)
{
    string h, m;
    stringstream sstime(time);
    getline(sstime, h, ':');
    hour = StringToInt(h);
    getline(sstime, m, ',');
    minutes = StringToInt(m);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that converts a string into an integer
int Parse::StringToInt(string line)
{
    int i;
    stringstream ss(line);
    ss >> i;

    return i;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that converts a string into a float
float Parse::StringToFloat(string line)
{
    float f;
    stringstream ss(line);
    ss >> f;

    return f;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for day
unsigned Parse::GetParseDay()
{
    return day;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for month
unsigned Parse::GetParseMonth()
{
    return month;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for year
unsigned Parse::GetParseYear()
{
    return year;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for hour
unsigned Parse::GetParseHour()
{
    return hour;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for minutes
unsigned Parse::GetParseMinutes()
{
    return minutes;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for wind speed
int Parse::GetParseWS()
{
    return windS;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for Solar radiation
float Parse::GetParseSR()
{
    return solarR;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for Ambient temperature
float Parse::GetParseAT()
{
    return ambientT;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// End of class

// main.cpp main class
//
// author Anu Anton Pradeep
// version 01
//
// bug - My program has no bugs.
//-------------------------------------------------------------------------------------------------------------------------------------------------//

#include "Vector.h"
#include "WeatherLog.h"
#include "Parse.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------//

#include <string>
#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>
#include <exception>

//-------------------------------------------------------------------------------------------------------------------------------------------------//

using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------------------------//

bool ReadFile(Parse &parsefile, string &line, string &heading, WeatherLog &wl, Vector<WeatherLog> &weatherLog);
unsigned GetUserChoice();
void Option1(Vector<WeatherLog> &weatherLog, WeatherLog &wl);
void Option2(Vector<WeatherLog> &weatherLog, WeatherLog &wl);
void Option3(Vector<WeatherLog> &weatherLog, WeatherLog &wl);
void Option4(Vector<WeatherLog> &weatherLog, WeatherLog &wl);
int CalWindSpeed(Vector<WeatherLog> &weatherLog, WeatherLog &wl, int y, int m);
float CalSolarRadiation(Vector<WeatherLog> &weatherLog, WeatherLog &wl, int y, int m);
float CalAmbientTemp(Vector<WeatherLog> &weatherLog, WeatherLog &wl, int y, int m);

int main()
{
    WeatherLog wl;
    Parse parsefile;
    Vector<WeatherLog> weatherLog;

    string line;
    string heading;

    if(ReadFile(parsefile, line, heading, wl, weatherLog))
    {
        unsigned choice = 0;
        do
        {
            choice = GetUserChoice();

            switch(choice)
            {
            case 1:
                cout << "You chose option 1" << endl;
                cout << '\n';
                Option1(weatherLog,wl);
                break;
            case 2:
                cout << "You chose option 2" << endl;
                cout << '\n';
                Option2(weatherLog,wl);
                break;
            case 3:
                cout << "You chose option 3" << endl;
                cout << '\n';
                Option3(weatherLog,wl);
                break;
            case 4:
                cout << "You chose option 4" << endl;
                cout << '\n';
                Option4(weatherLog,wl);
                break;
            case 5:
                cout << "Thank You! Exiting program!";
                break;
            default:
                cout << "Invalid option. Please choose an action from the menu(1-5).";
                break;
            }
        }
        while(choice!=5);
    }
    return 0;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function to display the menu for the user to chose an action to be performed
unsigned GetUserChoice()
{
    try
    {
        unsigned n = 0;
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << '\n';
        cout << "1. The average wind speed and average ambient air temperature for a specified month and year." << endl;
        cout << "2. Average wind speed and average ambient air temperature for each month of a specified year." << endl;
        cout << "3. Total solar radiation in kWh/m2 for each month of a specified year." << endl;
        cout << "4. Average wind speed (km/h), average ambient air temperature and total solar radiation in kWh/m2 for each month of a specified year" << endl;
        cout << "5. Exit the program" << endl;
        cout << '\n';
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "Enter action number to perform action(1-5): " << endl;
        cin >> n;
        return n;
    }
    catch (...)
    {
        cout << "Invalid input format." << endl;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that reads the file and pushes the objects into the vector
bool ReadFile(Parse &parsefile, string &line, string &heading, WeatherLog &wl, Vector<WeatherLog> &weatherLog)
{
    ifstream file("data/MetData_Mar01-2015-Mar01-2016-ALL.csv");

    if (file.good()==true)
    {
        cout << "File Identified" << endl;

        getline(file,heading,'\n');
        while(file.good())
        {
            getline(file,line,'\n');

            parsefile.ParseLog(line);
            wl.GetDate().SetDay(parsefile.GetParseDay());
            wl.GetDate().SetMonth(parsefile.GetParseMonth());
            wl.GetDate().SetYear(parsefile.GetParseYear());

            wl.GetTime().SetHour(parsefile.GetParseHour());
            wl.GetTime().SetMinute(parsefile.GetParseMinutes());

            wl.SetSpeed(parsefile.GetParseWS());
            wl.SetSolarRadiation(parsefile.GetParseSR());
            wl.SetAmbientTemp(parsefile.GetParseAT());

            weatherLog.push_back(wl);
        }
        return true;
    }
    else
    {
        cout << "File Unidentified" << endl;
        return false;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function to calculate the total average wind speed for a specific month of a specific year
int CalWindSpeed(Vector<WeatherLog> &weatherLog, WeatherLog &wl, int y, int m)
{
    unsigned c = 0;
    float sumSpeed = 0;
    float avgSpeed = 0;

    for (unsigned int i = 0; i < weatherLog.GetSize(); i++)
    {
        weatherLog.GetElement(i,wl);
        if(y == wl.GetDate().GetYear() && m == wl.GetDate().GetMonth())
        {
            sumSpeed = sumSpeed + wl.GetSpeed();
            c++;
        }
    }
    avgSpeed = (sumSpeed/c)*3.6; //converting units of the average value
    return avgSpeed;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function to calculate the total solar radiation for a specific month of a specific year
float CalSolarRadiation(Vector<WeatherLog> &weatherLog, WeatherLog &wl, int y, int m)
{
    float sumSR = 0;
    for (unsigned int i = 0; i < weatherLog.GetSize(); i++)
    {
        weatherLog.GetElement(i, wl);
        if(y == wl.GetDate().GetYear() && m == wl.GetDate().GetMonth())
        {
            if(wl.GetSolarRadiation() >= 100)
            {
                sumSR = sumSR + wl.GetSolarRadiation();
            }
        }
    }
    sumSR = (sumSR/6)/1000; //converting units of the total  value
    return sumSR;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function to calculate the total average ambient temperature for a specific month of a specific year
float CalAmbientTemp(Vector<WeatherLog> &weatherLog, WeatherLog &wl, int y, int m)
{
    unsigned c = 0;
    float sumAmbient = 0;
    float avgAmbient = 0;

    for (unsigned int i = 0; i < weatherLog.GetSize(); i++)
    {
        weatherLog.GetElement(i,wl);
        if(y == wl.GetDate().GetYear() && m == wl.GetDate().GetMonth())
        {
            sumAmbient = sumAmbient + wl.GetAmbientTemp();
            c++;
        }
    }
    avgAmbient = sumAmbient/c; //converting units of the average value
    return avgAmbient;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that executes the option 1 chosen by the user
void Option1(Vector<WeatherLog> &weatherLog, WeatherLog &wl)
{
    int y = 0;
    unsigned m = 0;
    float ws = 0;
    float atemp = 0;

    cout << "Enter Year: " << endl;
    cin >> y;
    cout << "Enter Month: " << endl;
    cin >> m;
    while(y <1 || m < 1 || m > 12)
    {
        cout << "Enter valid Year: (Hint: 2016)" << endl;
        cin >> y;
        cout << "Enter valid Month: (Hint: 7)" << endl;
        cin >> m;
    }

    ws = CalWindSpeed(weatherLog, wl, y, m);
    atemp = CalAmbientTemp(weatherLog, wl, y, m);

    if(ws > 0 && atemp > 0)
    {
        cout << wl.GetDate().GetStringMonth(m) << ": " << ws << " km/h," <<  atemp << " degrees C" << endl;
    }
    else
    {
        cout << wl.GetDate().GetStringMonth(m) << " " << y << ": " << "No Data" << endl;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that executes the option 2 chosen by the user
void Option2(Vector<WeatherLog> &weatherLog, WeatherLog &wl)
{
    int y = 0;
    unsigned m = 0;
    float ws = 0;
    float atemp = 0;

    cout << "Enter Year: " << endl;
    cin >> y;
    while(y < 1 )
    {
        cout << "Enter valid Year: (Hint: 2016)" << endl;
        cin >> y;
    }
    for (m = 1; m < 13; m++)
    {
        ws = CalWindSpeed(weatherLog, wl, y, m);
        atemp = CalAmbientTemp(weatherLog, wl, y, m);

        if(ws > 0 && atemp > 0)
        {
            cout << wl.GetDate().GetStringMonth(m) << ": " << ws << " km/h," <<  atemp << " degrees C" << endl;
        }
        else
        {
            cout << wl.GetDate().GetStringMonth(m) << " " << y << ": " << "No Data" << endl;
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that executes the option 3 chosen by the user
void Option3(Vector<WeatherLog> &weatherLog, WeatherLog &wl)
{
    int y = 0;
    unsigned m = 0;
    float sr = 0;
    cout << "Enter Year: " << endl;
    cin >> y;
    while(y < 1 )
    {
        cout << "Enter valid Year: (Hint: 2016)" << endl;
        cin >> y;
    }
    for (m = 1; m < 13; m++)
    {
        sr = CalSolarRadiation(weatherLog, wl, y, m);

        if (sr > 0)
        {
            cout << wl.GetDate().GetStringMonth(m) << ": " << sr << " kWh/m2" << endl;
        }
        else
        {
            cout << wl.GetDate().GetStringMonth(m) << " " << y << ": " << "No Data" << endl;
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that executes the option 4 chosen by the user
void Option4(Vector<WeatherLog> &weatherLog, WeatherLog &wl)
{
    int y = 0;
    unsigned m = 0;
    float ws = 0;
    float atemp = 0;
    float sr = 0;
    ofstream outputFile("WindTempSolar.csv");

    cout << "Enter Year: " << endl;
    cin >> y;
    while(y < 1 )
    {
        cout << "Enter valid Year: (Hint: 2016)" << endl;
        cin >> y;
    }
    outputFile << y << '\n';

    for (m = 1; m < 13; m++)
    {
        ws = CalWindSpeed(weatherLog, wl, y, m);
        atemp = CalAmbientTemp(weatherLog, wl, y, m);
        sr = CalSolarRadiation(weatherLog, wl, y, m);

        if (ws > 0 && atemp > 0 && sr > 0)
        {
            outputFile << wl.GetDate().GetStringMonth(m) << "," << ws << "," << atemp << "," << sr << '\n' ;
        }
    }
    cout << "Output File is ready in the directory" << endl;
    outputFile.close();
}
//-------------------------------------------------------------------------------------------------------------------------------------------------//
// End of class

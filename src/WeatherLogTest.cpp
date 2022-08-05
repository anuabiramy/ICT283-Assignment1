//-------------------------------------------------------------------------------/

#include "WeatherLog.h"

//-------------------------------------------------------------------------------/

#include <iostream>
#include <string>
#include <sstream>

//-------------------------------------------------------------------------------/

using namespace std;

//-------------------------------------------------------------------------------/

void wlTest1();
void wlTest2();
void wlTest3();
void wlTest4();
void wlTest5();
void wlTest6();
void wlTest7();
void wlTest8();
void wlTest9();
void wlTest10();
void wlTest11();
void wlTest12();
void wlTest13();
void wlTest14();
void wlTest15();

//-------------------------------------------------------------------------------/

int mainWeatherLog()
{
    cout << "Testing Weather Log class" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Test number, Description, Input data, Output data, Success/Fail" << endl;

    wlTest1(); //Testing creation of weatherLog object using default constructor
    wlTest2(); //Testing getter for wind speed
    wlTest3(); //Testing getter for solar radiation
    wlTest4(); //Testing getter for ambient temperature
    wlTest5(); //Testing getter for Date object
    wlTest6(); //Testing getter for Time object
    wlTest7(); //Testing setter for wind speed
    wlTest8(); //Testing setter for solar radiation
    wlTest9(); //Testing setter for ambient temperature
    wlTest10(); //Testing setter for wind speed with minus integer
    wlTest11(); //Testing setter for solar radiation with minus integer
    wlTest12(); //Testing setter for ambient temperature with minus integer
    wlTest13(); //Testing setter for wind speed with float value
    wlTest14(); //Testing setter for solar radiation with float value
    wlTest15(); //Testing setter for ambient temperature with float value

    return 0;
}

//-------------------------------------------------------------------------------/
void wlTest1()
{
    WeatherLog wl;
    cout << "Test 1," << "Testing default constructor," << "WeatherLog()," << "Speed: " << wl.GetSpeed() << " Ambient: " << wl.GetAmbientTemp() << " Solar radiation: " << wl.GetSolarRadiation() << "," << "Success" << endl;
    if (wl.GetSpeed() == 0 && wl.GetAmbientTemp() == 0 && wl.GetSolarRadiation() == 0)
    {
        //    cout << "Test 1," << "Testing default constructor," << "WeatherLog()," << "WindSpeed:" << wl.GetSpeed() << "-AmbientTemp:" << wl.GetAmbientTemp() << "-SolarRadiation:" << wl.GetSolarRadiation()() << "," << "Success" << endl;
    }
    else
    {
        // cout << "Test 1," << "Testing default constructor," << "WeatherLog()," << "WindSpeed:" << wl.GetSpeed() << "-AmbientTemp:" << wl.GetAmbientTemp() << "-SolarRadiation:" << wl.GetSolarRadiation()() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest2()
{
    WeatherLog wl;
    wl.SetSpeed(7);
    if (wl.GetSpeed() == 7)
    {
        cout << "Test 2," << "Testing Getter for speed," << "wl.GetSpeed()," << "WindSpeed:" << wl.GetSpeed() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 2," << "Testing Getter for speed," << "wl.GetSpeed()," << "WindSpeed:" << wl.GetSpeed() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest3()
{
    WeatherLog wl;
    wl.SetSolarRadiation(121);
    if (wl.GetSolarRadiation() == 121)
    {
        cout << "Test 3," << "Testing Getter for Solar radiation," << "wl.GetSolarRadiation()," << "Solar radiation:" << wl.GetSolarRadiation() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 3," << "Testing Getter for Solar radiation," << "wl.GetSolarRadiation()," << "Solar radiation:" << wl.GetSolarRadiation() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest4()
{
    WeatherLog wl;
    wl.SetAmbientTemp(32);
    if (wl.GetAmbientTemp() == 32)
    {
        cout << "Test 4," << "Testing Getter for Ambient temperature," << "wl.GetAmbientTemp()," << "Ambient temp:" << wl.GetAmbientTemp() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 4," << "Testing Getter for Ambient temperature," << "wl.GetAmbientTemp()," << "Ambient temp:" << wl.GetAmbientTemp() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest5()
{
    WeatherLog wl;
    wl.GetDate().SetDay(25);
    wl.GetDate().SetMonth(3);
    wl.GetDate().SetYear(2000);
    cout << "Test 5," << "Testing getter for date object," <<  "SetDay(25) SetMonth(3) SetYear(2000),"
         << "Day: " << wl.GetDate().GetDay() << " Month: " << wl.GetDate().GetStringMonth(wl.GetDate().GetMonth())
         << " Year: " << wl.GetDate().GetYear() << "," << "Success"  << endl;

}

//-------------------------------------------------------------------------------/
void wlTest6()
{
    WeatherLog wl;
    wl.GetTime().SetHour(15);
    wl.GetTime().SetMinute(45);
    cout << "Test 6," << "Testing getter for time object," << "Sethour(15) SetMinute(45),"
         << "Hour: " << wl.GetTime().GetHour() << "Minute: " << wl.GetTime().GetMinute() << "," << "Success" << endl;
}

//-------------------------------------------------------------------------------/
void wlTest7()
{
    WeatherLog wl;
    wl.SetSpeed(7);
    if (wl.GetSpeed() == 7)
    {
        cout << "Test 7," << "Testing Getter for speed," << "Setting windspeed to 7," << "WindSpeed:" << wl.GetSpeed() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 7," << "Testing Getter for speed," << "Setting windspeed to 7," << "WindSpeed:" << wl.GetSpeed() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest8()
{
    WeatherLog wl;
    wl.SetSolarRadiation(121);
    if (wl.GetSolarRadiation() == 121)
    {
        cout << "Test 8," << "Testing Getter for Solar radiation," << "Setting solar radiation to 121," << "Solar radiation:" << wl.GetSolarRadiation() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 8," << "Testing Getter for Solar radiation," << "Setting solar radiation to 121," << "Solar radiation:" << wl.GetSolarRadiation() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest9()
{
    WeatherLog wl;
    wl.SetAmbientTemp(32);
    if (wl.GetAmbientTemp() == 32)
    {
        cout << "Test 9," << "Testing Getter for Ambient temperature," << "Setting ambient temp to 32," << "Ambient temp:" << wl.GetAmbientTemp() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 9," << "Testing Getter for Ambient temperature," << "Setting ambient temp to 32," << "Ambient temp:" << wl.GetAmbientTemp() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest10()
{
    WeatherLog wl;
    wl.SetSpeed(-7);
    if (wl.GetSpeed() == -7)
    {
        cout << "Test 10," << "Testing Getter for speed with minus value," << "Setting windspeed to -7," << "WindSpeed:" << wl.GetSpeed() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 10," << "Testing Getter for speed with minus value," << "Setting windspeed to -7," << "WindSpeed:" << wl.GetSpeed() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest11()
{
    WeatherLog wl;
    wl.SetSolarRadiation(-121);
    if (wl.GetSolarRadiation() == -121)
    {
        cout << "Test 11," << "Testing Getter for Solar radiation with minus value," << "Setting solar radiation to -121," << "Solar radiation:" << wl.GetSolarRadiation() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 11," << "Testing Getter for Solar radiation with minus value," << "Setting solar radiation to -121," << "Solar radiation:" << wl.GetSolarRadiation() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest12()
{
    WeatherLog wl;
    wl.SetAmbientTemp(-32);
    if (wl.GetAmbientTemp() == -32)
    {
        cout << "Test 12," << "Testing Getter for Ambient temperature with minus value," << "Setting ambient temp to -32," << "Ambient temp:" << wl.GetAmbientTemp() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 12," << "Testing Getter for Ambient temperature with minus value," << "Setting ambient temp to -32," << "Ambient temp:" << wl.GetAmbientTemp() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void wlTest13()
{
    WeatherLog wl;
    wl.SetSpeed(7.77);

    cout << "Test 13," << "Testing Getter for speed with float value," << "Setting windspeed to 7.77," << "WindSpeed:" << wl.GetSpeed() << "," << "Success" << endl;

}

//-------------------------------------------------------------------------------/
void wlTest14()
{
    WeatherLog wl;
    wl.SetSolarRadiation(121.123);

    cout << "Test 14," << "Testing Getter for Solar radiation with float value," << "Setting solar radiation to 121.123," << "Solar radiation:" << wl.GetSolarRadiation() << "," << "Success" << endl;

}

//-------------------------------------------------------------------------------/
void wlTest15()
{
    WeatherLog wl;
    wl.SetAmbientTemp(32.321);
    cout << "Test 15," << "Testing Getter for Ambient temperature with float value," << "Setting ambient temp to 32.321," << "Ambient temp:" << wl.GetAmbientTemp() << "," << "Success" << endl;
}
//-------------------------------------------------------------------------------/
// End of class

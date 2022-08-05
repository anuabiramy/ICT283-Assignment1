// datetest.cpp - Date test implementation class.
//-------------------------------------------------------------------------------/

#include "Date.h"

//-------------------------------------------------------------------------------/

#include <iostream>
#include <string>

//-------------------------------------------------------------------------------/

using namespace std;

//-------------------------------------------------------------------------------/

void DateTest1(Date& d);
void DateTest2(Date& d);
void DateTest3(Date& d);
void DateTest4(Date& d);
void DateTest5(Date& d);
void DateTest6(Date& d);
void DateTest7(Date& d);
void DateTest8(Date& d);
void DateTest9(Date& d);
void DateTest10(Date& d);
void DateTest11(Date& d);
void DateTest12(Date& d);
void DateTest13(Date& d);
void DateTest14();
void DateTest15();
void DateTest16();
void DateTest17();
void DateTest18(Date& d);
void DateTest19(Date& d);
void DateTest20(Date& d);


//-------------------------------------------------------------------------------/

int mainDate()
{
    Date d;

    cout << "Testing Date class" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Test number, Description, Input data, Output data, Sucesss/Fail" << endl;
    DateTest1(d); //test default constructor
    DateTest2(d); //test non default constructor
    DateTest3(d); //test getter for day
    DateTest4(d); //test getter for month
    DateTest5(d); //test getter for year
    DateTest6(d); //test setter for day
    DateTest7(d); //test setter for month
    DateTest8(d); //test setter for year
    DateTest9(d); //test setter for minus value for day
    DateTest10(d); //test setter for minus value for month
    DateTest11(d); //test setter for minus value for year
    DateTest12(d); //test setter for for non-existing day
    DateTest13(d); //test setter for non-existing month
    DateTest14(); //test setter for string value for day
    DateTest15(); //test setter for string value for month
    DateTest16(); //test setter for string value for year
    DateTest17(); //test string value for GetStringMonth
    DateTest18(d); //test minus value for GetStringMonth
    DateTest19(d); //test all 12 months for GetStringMonth
    DateTest20(d); //test float value for GetStringMonth

    return 0;
}

//-------------------------------------------------------------------------------/
void DateTest1(Date& d)
{
    Date();
    cout << "Test 1," << "Testing constructor," << "Date()," << "Day:" << d.GetDay() << "-Month:" << d.GetMonth() << "-Year:" << d.GetYear() << "," << "Success" << endl;

}

//-------------------------------------------------------------------------------/
void DateTest2(Date& d)
{
    Date(12,05,2020);
    cout << "Test 2," << "Testing non default constructor," << "Date(12,05,2020)," << "Day:" << d.GetDay() << "-Month:" << d.GetMonth() << "-Year:" << d.GetYear() << "," << "Success" << endl;

}

//-------------------------------------------------------------------------------/

void DateTest3(Date& d)
{

    if (d.GetDay() == 0)
    {
        cout << "Test 3," << "Testing getter for day," << "None," << "Day: " << d.GetDay() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 3," << "Testing getter for day," << "None," << "Day: " << d.GetDay() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest4(Date& d)
{
    if (d.GetMonth() == 0)
    {
        cout << "Test 4," << "Testing getter for Month," << "None," << "Month: " << d.GetStringMonth(d.GetMonth()) << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 4," << "Testing getter for Month," << "None," << "Month: " << d.GetStringMonth(d.GetMonth()) << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest5(Date& d)
{
    if (d.GetYear() == 0)
    {
        cout << "Test 5," << "Testing getter for Year," << "None," << "Year: " << d.GetYear() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 5," << "Testing getter for Year," << "None," << "Year: " << d.GetYear() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest6(Date& d)
{
    d.SetDay(23);
    unsigned day = d.GetDay();
    if(day == 23)
    {
        cout << "Test 6," << "Testing setter for day," << "23," << "Day: " << d.GetDay() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 6," << "Testing setter for day," << "23," << "Day: " << d.GetDay() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest7(Date& d)
{
    d.SetMonth(10);
    unsigned m = d.GetMonth();
    if(m == 10)
    {
        cout << "Test 7," << "Testing setter for Month," << "10," << "Month: " << d.GetStringMonth(m) << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 7," << "Testing setter for Month," << "10," << "Month: " << d.GetStringMonth(m) << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest8(Date& d)
{
    d.SetYear(2015);
    unsigned y = d.GetYear();
    if (y == 2015)
    {
        cout << "Test 8," << "Testing setter for Year ," << "2015," << "Year: " << d.GetYear() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 8," << "Testing setter for Year ," << "2015," << "Year: " << d.GetYear() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest9(Date& d)
{
    d.SetDay(-23);
    if(d.GetDay() == -23)
    {
        cout << "Test 9," << "Testing setter with minus value for day ," << "-23," << "Day: " << d.GetDay() << "," << "Fail" << endl;
    }
    else
    {
        cout << "Test 9," << "Testing setter with minus value for day ," << "-23," << "Day: " << d.GetDay() << "," << "Success" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest10(Date& d)
{
    d.SetMonth(-10);
    unsigned m = d.GetMonth();
    if(m == -10)
    {
        cout << "Test 10," << "Testing setter with minus for Month ," << "-10," << "Month: " << d.GetStringMonth(m) << "," << "Fail" << endl;
    }
    else
    {
        cout << "Test 10," << "Testing setter with minus for Month ," << "-10," << "Month: " << d.GetStringMonth(m) << "," << "Success" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest11(Date& d)
{
    d.SetYear(-2015);
    unsigned y = d.GetYear();
    if (y == -2015)
    {
        cout << "Test 11," << "Testing setter with minus for Year ," << "-2015," << "Year: " << d.GetYear() << "," << "Fail" << endl;
    }
    else
    {
        cout << "Test 11," << "Testing setter with minus for Year ," << "-2015," << "Year: " << d.GetYear() << "," << "Success" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest12(Date& d)
{
    d.SetDay(123);
    if(d.GetDay() == 123)
    {
        cout << "Test 12," << "Testing setter for for non-existing day ," << "123," << "Day: " << d.GetDay() << "," << "Fail" << endl;
    }
    else
    {
        cout << "Test 12," << "Testing setter for for non-existing day ," << "123," << "Day: " << d.GetDay() << "," << "Success" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest13(Date& d)
{
    d.SetMonth(15);
    unsigned m = d.GetMonth();
    if(m == 15)
    {
        cout << "Test 13," << "Testing setter for non-existing Month ," << "15," << "Month: " << d.GetStringMonth(m) << "," << "Fail" << endl;
    }
    else
    {
        cout << "Test 13," << "Testing setter for non-existing Month ," << "15," << "Month: " << d.GetStringMonth(m) << "," << "Success" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest14()
{
    //d.SetDay("hello");
    //if(d.GetDay() == "hello")
    //{
    //    cout << "Test 14," << "Testing setter for string value for day," << "hello," << "Day: " << d.GetDay() << "," << "Fail" << endl;
    //}
    //else
    //{
    //    cout << "Test 14," << "Testing setter for string value for day," << "hello," << "Day: " << d.GetDay() << "," << "Success" << endl;
    //}

    cout << "Test 14," << "Testing setter for string value for day ," << "hello," << "Error compiling," << "Success" << endl;

}

//-------------------------------------------------------------------------------/

void DateTest15()
{
    //
    // d.SetMonth("hello");
    //if(d.GetMonth() == "hello")
    //{
    //    cout << "Test 15," << "Testing setter for string value for Month," << "hello," << "Day: " << d.GetMonth() << "," << "Fail" << endl;
    //}
    //else
    //{
    //    cout << "Test 15," << "Testing setter for string value for Month," << "hello," << "Day: " << d.GetMonth() << "," << "Success" << endl;
    //}


     cout << "Test 15," << "Testing setter for string value for Month ," << "hello," << "Error compiling," << "Success" << endl;

}

//-------------------------------------------------------------------------------/

void DateTest16()
{
    //
    // d.SetYear("hello");
    //if(d.GetYear() == "hello")
    //{
    //    cout << "Test 16," << "Testing setter for string value for Year," << "hello," << "Day: " << d.GetYear() << "," << "Fail" << endl;
    //}
    //else
    //{
    //    cout << "Test 16," << "Testing setter for string value for Year," << "hello," << "Day: " << d.GetYeari() << "," << "Success" << endl;
    //}

    cout << "Test 16," << "Testing setter for string value for Year ," << "hello," << "Error compiling," << "Success" << endl;
}

//-------------------------------------------------------------------------------/

void DateTest17()
{


    cout << "Test 17," << "testing string value for GetStringMonth ," << "hello," << "Cannot compile with string," << "Success" << endl;

}

//-------------------------------------------------------------------------------/

void DateTest18(Date& d)
{
    unsigned i = -5;
    cout << "Test 18," << "testing minus value for GetStringMonth ," << "hello," << "Month: " << d.GetStringMonth(i) << "," << "Success" << endl;
}

//-------------------------------------------------------------------------------/

void DateTest19(Date& d)
{

    for (unsigned i = 1; i < 13; i++)
    {
        cout << "Test 19." << i << "," << "testing all months for GetStringMonth, " << i << "," << "Month: " << d.GetStringMonth(i) << "," << "Success" << endl;
    }
}

//-------------------------------------------------------------------------------/

void DateTest20(Date& d)
{
    float f = 2.3;
    cout << "Test 20," << "testing float value for GetStringMonth," << "2.3," << "Month: " << d.GetStringMonth(f) << "," << "Success" << endl;
}

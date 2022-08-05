
//-------------------------------------------------------------------------------/

#include "vector.h"

//-------------------------------------------------------------------------------/

#include <iostream>
#include <string>
#include <sstream>

//-------------------------------------------------------------------------------/

using namespace std;

//-------------------------------------------------------------------------------/

void vectorTest1();
void vectorTest2();
void vectorTest3();
void vectorTest4();
void vectorTest5();
void vectorTest6();
void vectorTest7();
void vectorTest8();
void vectorTest9();
void vectorTest10();
void vectorTest11();
void vectorTest12();
void vectorTest13();
void vectorTest14();
void vectorTest15();
void vectorTest16();
void vectorTest17();
void vectorTest18();
void vectorTest19();
void vectorTest20();
void vectorTest21();
void vectorTest22();
void vectorTest23();
void vectorTest24();
void vectorTest25();

//-------------------------------------------------------------------------------/

int mainVector()
{
    cout << "Testing Vector class" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Test number, Description, Input data, Output data, Success/Fail" << endl;
    vectorTest1(); //Test for creating a vector object
    vectorTest2(); //Testing push back for integer
    vectorTest3(); //Testing push back for string
    vectorTest4(); //Testing push back for float
    vectorTest5(); //Testing copy constructor for int type
    vectorTest6(); //Testing copy constructor for string type
    vectorTest7(); //Testing copy constructor for float type
    vectorTest8(); //Testing overloaded assignment operator for int type
    vectorTest9(); //Testing overloaded assignment operator for string type
    vectorTest10(); //Testing overloaded assignment operator for float type
    vectorTest11(); //Testing vector grow for 1 million elements of int type
    vectorTest12(); //Testing vector grow for 1 million elements of string type
    vectorTest13(); //Testing vector grow for 1 million elements of float type
    vectorTest14(); //Testing vector grow for 10 million elements of int type
    vectorTest15(); //Testing vector grow for 10 million elements of string type
    vectorTest16(); //Testing vector grow for 10 million elements of float type
    vectorTest17(); //Testing vector grow for 100 million elements of int type
    vectorTest18(); //Testing vector grow for 100 million elements of string type
    vectorTest19(); //Testing vector grow for 100 million elements of float type
    vectorTest20(); //Testing pop back for integer
    vectorTest21(); //Testing pop back for string
    vectorTest22(); //Testing pop back for float
    vectorTest23(); //Testing if the operator actually uses deep copy
    vectorTest24(); //Testing the maximum capacity of the vector
    vectorTest25(); //Testing getElement function

    return 0;
}

//-------------------------------------------------------------------------------/
void vectorTest1()
{
    Vector<int> vect;
    try
    {

        cout << "Test 1," << "Test for creating a vector object," << "Vector<int> vect," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 1," << "Test for creating a vector object," << "Vector<int> vect," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest2()
{
    Vector<int> vect;

    int num = 5555;
    if(vect.push_back(num))
    {

        cout << "Test 2," << "Testing push back for integer," << "5555," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 2," << "Testing push back for integer," << "5555," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest3()
{
    Vector<string> vect;
    try
    {
        string v = "HELLO";
        vect.push_back(v);
        v = "HELLO";
        vect.push_back(v);
        v = "HELLO";
        vect.push_back(v);
        cout << "Test 3," << "Testing push back for string," << "HELLO," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 3," << "Testing push back for string," << "HELLO," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest4()
{
    Vector<float> vect;
    try
    {
        float f = 66.88;
        vect.push_back(f);
        cout << "Test 4," << "Testing push back for float," << "66.88," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 4," << "Testing push back for float," << "66.88," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest5()
{
    Vector<int> vect;

    int i = 12345;
    vect.push_back(i);
    Vector<int> vect2(vect);
    cout << "Test 5," << "Testing copy constructor for int type," << "vect{12345} copied to vect2,"
         << "Size:" << vect2.GetSize() << " Capacity:" << vect2.GetCapacity() << "," << "Success" << endl;


}

//-------------------------------------------------------------------------------/
void vectorTest6()
{
    Vector<string> vect;
    string s = "Hello world";
    vect.push_back(s);
    Vector<string> vect2(vect);
    cout << "Test 6," << "Testing copy constructor for string type," << "vect{Hello world} copied to vect2,"
         << "Size:" << vect2.GetSize() << " Capacity:" << vect2.GetCapacity() << "," << "Success" << endl;
}

//-------------------------------------------------------------------------------/
void vectorTest7()
{
    Vector<float> vect;
    float f = 12.34;
    vect.push_back(f);
    Vector<float> vect2(vect);
    cout << "Test 7," << "Testing copy constructor for float type," << "vect{12.34} copied to vect2,"
         << "Size:" << vect2.GetSize() << " Capacity:" << vect2.GetCapacity() << "," << "Success" << endl;
}

//-------------------------------------------------------------------------------/
void vectorTest8()
{
    Vector<int> vect2;
    try
    {
        Vector<int> vect;
        int i = 12345;
        vect.push_back(i);
        i = 56789;
        vect.push_back(i);
        i = 98765;
        vect.push_back(i);

        vect2 = vect;

        cout << "Test 8," << "Testing overloaded assignment operator for int type," << "Values 12345 56789 98765(vect) to vect2,"
             << "Size:" << vect2.GetSize() << " Capacity:" << vect2.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 8," << "Testing overloaded assignment operator for int type," << "12345(vect) to vect2,"
             << "Size:" << vect2.GetSize() << " Capacity:" << vect2.GetCapacity() << "," << "Fail" << endl;
    }

}

//-------------------------------------------------------------------------------/
void vectorTest9()
{
    Vector<string> vect2;
    try
    {
        Vector<string> vect;
        string s = "Hello world";
        vect.push_back(s);
        s = "Hello world";
        vect.push_back(s);
        s = "Hello world";
        vect.push_back(s);

        vect2 = vect;
        cout << "Test 9," << "Testing overloaded assignment operator for string type,"
             << "strings Hello world Hello world Hello world(vect) to vect2," << "Size:" << vect2.GetSize()
             << " Capacity:" << vect2.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 9," << "Testing overloaded assignment operator for string type,"
             << "strings Hello world Hello world Hello world(vect) to vect2," << "Size:" << vect2.GetSize()
             << " Capacity:" << vect2.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest10()
{
    Vector<float> vect2;
    try
    {
        Vector<float> vect;
        float f = 12.34;
        vect.push_back(f);
        f = 25.03;
        vect.push_back(f);
        f = 01.10;
        vect.push_back(f);

        vect2 = vect;
        cout << "Test 10," << "Testing overloaded assignment operator for float type,"
             << "values 12.34 25.03 01.10(vect) to vect2," << "Size:" << vect2.GetSize()
             << " Capacity:" << vect2.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 10," << "Testing overloaded assignment operator for float type,"
             << "values 12.34 25.03 01.10(vect) to vect2," << "Size:" << vect2.GetSize()
             << " Capacity:" << vect2.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest11()
{
    Vector<int>vect;
    try
    {
        int i = 12345;
        for(int p = 0; p < 1000000; p++)
        {
            vect.push_back(i);
        }
        cout << "Test 11," << "Testing vector grow for 1 million elements of int type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 11," << "Testing vector grow for 1 million elements of int type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest12()
{
    Vector<string>vect;
    try
    {
        string s = "Hello world";
        for(int p = 0; p < 1000000; p++)
        {
            vect.push_back(s);
        }
        cout << "Test 12," << "Testing vector grow for 1 million elements of string type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch (...)
    {
        cout << "Test 12," << "Testing vector grow for 1 million elements of string type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest13()
{
    Vector<float>vect;
    try
    {
        float i = 12.34;
        for(int p = 0; p < 1000000; p++)
        {
            vect.push_back(i);
        }
        cout << "Test 13," << "Testing vector grow for 1 million elements of float type," << "12.34,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 13," << "Testing vector grow for 1 million elements of float type," << "12.34,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest14()
{
    Vector<int>vect;
    try
    {
        int i = 12345;
        for(int p = 0; p < 10000000; p++)
        {
            vect.push_back(i);
        }
        cout << "Test 14," << "Testing vector grow for 10 million elements of int type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 14," << "Testing vector grow for 10 million elements of int type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }

}

//-------------------------------------------------------------------------------/
void vectorTest15()
{
    Vector<string>vect;
    string s = "Hello world";
    for(int p = 0; p < 10000000; p++)
    {
        vect.push_back(s);
    }
    cout << "Test 15," << "Testing vector grow for 10 million elements of string type," << "12345,"
         << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
}

//-------------------------------------------------------------------------------/
void vectorTest16()
{
    Vector<float>vect;
    try
    {
        float i = 12.34;
        for(int p = 0; p < 10000000; p++)
        {
            vect.push_back(i);
        }
        cout << "Test 16," << "Testing vector grow for 10 million elements of float type," << "12.34,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 16," << "Testing vector grow for 10 million elements of float type," << "12.34,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest17()
{
    Vector<int>vect;
    try
    {
        int i = 12345;
        for(int p = 0; p < 100000000; p++)
        {
            vect.push_back(i);
        }
        cout << "Test 17," << "Testing vector grow for 100 million elements of int type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 17," << "Testing vector grow for 100 million elements of int type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest18()
{
    Vector<string>vect;
    string s = "Hello world";
    try
    {
        for(int p = 0; p < 100000000; p++)
        {
            vect.push_back(s);
        }
        cout << "Test 18," << "Testing vector grow for 100 million elements of string type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 18," << "Testing vector grow for 100 million elements of string type," << "12345,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;

    }
}

//-------------------------------------------------------------------------------/
void vectorTest19()
{
    Vector<float>vect;
    float i = 12.34;
    try
    {
        for(int p = 0; p < 100000000; p++)
        {
            vect.push_back(i);
        }
        cout << "Test 19," << "Testing vector grow for 100 million elements of float type," << "12.34,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    catch(...)
    {
        cout << "Test 19," << "Testing vector grow for 100 million elements of float type," << "12.34,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;

    }
}

//-------------------------------------------------------------------------------/
void vectorTest20()
{
    Vector<int>vect;
    bool success = false;
    for(int i = 0; i < 5; i++)
    {
        vect.push_back(i);
    }
    success = vect.pop_back();
    if (success)
    {
        cout << "Test 20," << "Testing pop back for integer," << "0 1 2 3 4," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 20," << "Testing pop back for integer," << "0 1 2 3 4," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest21()
{
    Vector<string>vect;
    bool success = false;
    string s = "hello world";
    for(int i = 0; i < 5; i++)
    {
        vect.push_back(s);
    }
    success = vect.pop_back();
    if (success)
    {
        cout << "Test 21," << "Testing pop back for string," << "Hello world," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 21," << "Testing pop back for string," << "Hello world," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest22()
{
    Vector<float>vect;
    bool success = false;
    float f = 66.88;
    for(int i = 0; i < 5; i++)
    {
        vect.push_back(f);
    }
    success = vect.pop_back();
    if (success)
    {
        cout << "Test 22," << "Testing pop back for float," << "66.88," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }
    else
    {
        cout << "Test 22," << "Testing pop back for float," << "66.88," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

//-------------------------------------------------------------------------------/
void vectorTest23()
{
    Vector<int> vect2;
    Vector<int> vect;
    int i = 12345;
    vect.push_back(i);
    i = 23456;
    vect.push_back(i);
    i = 87654;
    vect.push_back(i);

    vect2 = vect;

    i = 12345;
    vect.push_back(i);
    i = 23456;
    vect.push_back(i);
    i = 87654;
    vect.push_back(i);

    cout << "Test 23," << "Testing overloaded assignment operator for int type,"
         << "adding 3 ints to vect to copy into vect 2 and adding 3 more int values to vect,"
         << "Vect 2 Size:" << vect2.GetSize() << "Vect 2 Capacity:" << vect2.GetCapacity()
         << "Vect Size:" << vect.GetSize() << "Vect Capacity:" << vect.GetCapacity() << "," << "Success" << endl;

}

//-------------------------------------------------------------------------------/
void vectorTest24()
{
    Vector<int> vect;

    try
    {
        int i = 1;
        while(i>0)
        {
            vect.push_back(i);
        }
    }
    catch(...)
    {
        cout << "Test 24," << "Checking the maximum capacity of the vector," << "int value from 1 until maximum capacity is reach,"
             << "Size:" << vect.GetSize() << " Capacity:" << vect.GetCapacity() << "," << "Success" << endl;
    }

}

//-------------------------------------------------------------------------------/
void vectorTest25()
{
    Vector<int> vect;
    int searchVal = 0;
    try
    {
        int num;

        num = 1;
        vect.push_back(num);
        num = 2;
        vect.push_back(num);
        num = 3;
        vect.push_back(num);
        num = 4;
        vect.push_back(num);
        num = 5;
        vect.push_back(num);

        for (unsigned p = 0; p < vect.GetSize(); p++)
        {
            vect.GetElement(p,searchVal);
            if(searchVal == 3)
            {
                cout << "Test 25," << "Testing function getElement - the vector was given 5 integers and is expected to find a specific integer,"
                     << "Integers 1 to 5 and search value is 3," << "Size:" << vect.GetSize()
                     << " Capacity:" << vect.GetCapacity() << "Value at index: " << p << "," << "Success" << endl;
            }
        }
    }
    catch(...)
    {
        cout << "Test 25," << "Testing function getElement - the vector was given 5 integers and is expected to find a specific integer,"
             << "Integers 1 to 5 and search value is 3," << "Size:" << vect.GetSize()
             << " Capacity:" << vect.GetCapacity() << "," << "Fail" << endl;
    }
}

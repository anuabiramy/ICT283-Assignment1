// Date.H
// Class representing Date
//
//
//
//-------------------------------------------------------------------------------------------------------------------------------------------------//

#ifndef DATE_H
#define DATE_H

//-------------------------------------------------------------------------------------------------------------------------------------------------//

#include <string>
#include <iostream>

//-------------------------------------------------------------------------------------------------------------------------------------------------//

using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------------------------//

/**
 * @class Date
 * @brief Date class will contain all date related variables and methods, this class is directly accessed only through the weather log class.
 *
 * @author Anu Anton Pradeep
 * @version 02
 * @date 12/10/2021, Added input and output operators
 *
 * @bug My program has no bugs.
 */
class Date
{
public:

    /** \brief Default constructor for date object
     *
     * \param None
     * \return None
     */
    Date();

    /** \brief Virtual destructor for date object
     *
     * \param None
     * \return None
     */
    virtual ~Date() {};

    /** \brief Non-default constructor that assigns the passed values to the member variables
     *
     * \param unsigned day, unsigned month, unsigned year
     * \return None
     */
    Date(unsigned d, unsigned m, unsigned y);

    /** \brief Setter for day
     *
     * \param unsgined day
     * \return bool true/false
     */
    bool SetDay(unsigned d);

    /** \brief Getter for day
     *
     * \param None
     * \return unsigned day;
     */
    unsigned GetDay();

    /** \brief Setter for the month
     *
     * \param unsigned month
     * \return bool true/false
     */
    bool SetMonth(unsigned m);

    /** \brief Getter for month
     *
     * \param None
     * \return unsigned month
     */
    unsigned GetMonth();

    /** \brief Setter for year
     *
     * \param unsigned year
     * \return bool true/false
     */
    bool SetYear(unsigned y);

    /** \brief Getter for year
     *
     * \param None
     * \return unsigned year
     */
    unsigned GetYear();

    /** \brief Function that converts integer month to the string month (3 will be converted to March)
     *
     * \param unsigned month
     * \return string month
     */
    string GetStringMonth(unsigned m);

private:
    unsigned day = 0; ///Unsigned variable to store the day of the date
    unsigned month = 0;///Unsigned variable to store the month of the date
    unsigned year = 0; ///Unsigned variable to store the year of the date

};

#endif // DATE_H

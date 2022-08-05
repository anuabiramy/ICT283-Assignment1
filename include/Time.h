// Time.H
// Class representing Time
//
//
//
//-------------------------------------------------------------------------------------------------------------------------------------------------//

#ifndef TIME_H
#define TIME_H

//-------------------------------------------------------------------------------------------------------------------------------------------------//

#include <string>
#include <iostream>

//-------------------------------------------------------------------------------------------------------------------------------------------------//

using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------------------------//

/**
 * @class Time
 * @brief Time class contains all time related member variable and methods. Time class is only directly accessed through the weather log class.
 *
 * @author Anu Anton Pradeep
 * @version 01
 * @date 12/10/2021 Anu AP
 *
 * @bug My program has no bugs.
 */
class Time
{
public:

    /** \brief Default constructor for time object
     *
     * \param None
     * \return None
     */
    Time();

    /** \brief Default destructor for time object
     *
     * \param None
     * \return None
     */
    ~Time() {};

    /** \brief Non-default constructor for time object
     *
     * \param unsigned hour, unsigned minute
     * \return None
     */
    Time(unsigned h, unsigned m);

    /** \brief Getter for hour
     *
     * \param None
     * \return Unsigned hour
     */
    unsigned GetHour();

    /** \brief Getter for minute
     *
     * \param None
     * \return Unsigned minute
     */
    unsigned GetMinute();

    /** \brief Setter for hour
     *
     * \param unsigned hour
     * \return None
     */
    void SetHour(unsigned h);

    /** \brief Setter for minute
     *
     * \param unsigned minute
     * \return None
     */
    void SetMinute(unsigned m);

private:
    unsigned hour = 0; ///Unsigned variable to store the hour of the time
    unsigned minute = 0; ///Unsigned variable to store the minute of the time

};

#endif // TIME_H


// WeatherLog.H
// Class representing WeatherLog
//
//
//
//-------------------------------------------------------------------------------------------------------------------------------------------------//

#ifndef WeatherLog_H
#define WeatherLog_H

//-------------------------------------------------------------------------------------------------------------------------------------------------//

#include "Date.h"
#include "Time.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------//

#include <string>
#include <iostream>

//-------------------------------------------------------------------------------------------------------------------------------------------------//

/**
 * @class WeatherLog
 * @brief Weather Log class contains all weather related data and methods along with the accessor methods to the date and time class.
 *
 * @author Anu Anton Pradeep
 * @version 01
 * @date 24/10/2021 Anu AP
 *
 * @bug My program has no bugs.
 */
class WeatherLog
{
public:

    /** \brief Default constructor to create WeatherLog object
     *
     * \param None
     * \return None
     */
    WeatherLog();

    /** \brief Default destructor
     *
     * \param None
     * \return None
     */
    ~WeatherLog() {};

    /** \brief Setter for speed
     *
     * \param float speed
     * \return bool true/false
     */
    bool SetSpeed(float s);

    /** \brief Getter for speed
     *
     * \param None
     * \return float speed
     */
    float GetSpeed();

    /** \brief Setter for ambient temperature
     *
     * \param float ambient temperature
     * \return bool true/false
     */
    bool SetAmbientTemp(float a);

    /** \brief Getter for ambient temperature
     *
     * \param None
     * \return flaot ambient temperature
     */
    float GetAmbientTemp();

    /** \brief Setter for solar radiation
     *
     * \param float solar radiation
     * \return bool true/false
     */
    bool SetSolarRadiation(float sr);

    /** \brief Getter for solar radiation
     *
     * \param None
     * \return float solar radiation
     */
    float GetSolarRadiation();

    /** \brief Getter for date object to access the date related methods
     *
     * \param None
     * \return Date object
     */
    Date& GetDate();

    /** \brief Getter for time object to access the time related methods
     *
     * \param None
     * \return Time object
     */
    Time& GetTime();

private:
    Date d; ///Date object to access the date related variables and methods
    Time t; ///Time object to access the time related variables and methods
    float speed = 0; ///float variable to store to the wind speed
    float ambientT = 0; ///float variable to store the ambient temperature
    float solarR = 0; ///float variable to store the solar radiation

};

#endif // WeatherLogTYPE_H

// Parse.H
// Class representing Parse
//
//
//
//-------------------------------------------------------------------------------------------------------------------------------------------------//

#ifndef PARSE_H
#define PARSE_H

//-------------------------------------------------------------------------------------------------------------------------------------------------//

#include <string>
#include <iostream>
#include <sstream>
#include <iterator>

//-------------------------------------------------------------------------------------------------------------------------------------------------//

using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------------------------//

/**
 * @class Parse
 * @brief Parse class is used to parse all the file data from the file to local variables which later will be used using the getters to accommodate the Weather log. Parse class is only accessed through the main.
 *
 * @author Anu Anton Pradeep
 * @version 01
 * @date 24/10/2021 Anu AP
 *
 * @bug My program has no bugs.
 */
class Parse
{
public:

    /** \brief Default constructor
     *
     * \param None
     * \return None
     */
    Parse();

    /** \brief Default destructor
     *
     * \param None
     * \return None
     */
     ~Parse(){};

    /** \brief Function to extract values and store them into the local member variables
     *
     * \param string line
     * \return None
     */
    void ParseLog(string line);

    /** \brief Function to extract date related values and store them into the member variables
     *
     * \param string date
     * \return None
     */
    void ParseDate(string date);

    /** \brief Function to extract time related values and store them into the member variables
     *
     * \param String time
     * \return None
     */
    void ParseTime(string time);

    /** \brief Function that converts string to integer value
     *
     * \param string line
     * \return integer value
     */
    int StringToInt(string line);

    /** \brief Function that converts string to float value
     *
     * \param string line
     * \return float value
     */
    float StringToFloat(string line);

    /** \brief Getter for day
     *
     * \param None
     * \return unsigned day
     */
    unsigned GetParseDay();

    /** \brief Getter for Month
     *
     * \param None
     * \return unsigned month
     */
    unsigned GetParseMonth();

    /** \brief Getter for year
     *
     * \param None
     * \return unsigned year
     */
    unsigned GetParseYear();

    /** \brief Getter for hour
     *
     * \param None
     * \return Unsigned hour
     */
    unsigned GetParseHour();

    /** \brief Getter for minutes
     *
     * \param None
     * \return Unsigned minutes
     */
    unsigned GetParseMinutes();

    /** \brief Getter for wind speed
     *
     * \param None
     * \return integer wind speed
     */
    int GetParseWS();

    /** \brief Getter for solar radiation
     *
     * \param None
     * \return Float solar radiation
     */
    float GetParseSR();

    /** \brief Getter for ambient temperature
     *
     * \param None
     * \return Float ambient temperature
     */
    float GetParseAT();

private:
    unsigned day=0; ///Local variable to store the day of the date
    unsigned month=0; ///Local variable to store the month of the date
    unsigned year=0; ///Local variable to store the year of the date
    unsigned hour=0; ///Local variable to store the hour of the time
    unsigned minutes=0; ///Local variable to store the minute of the time
    int windS=0; ///Local variable to store the wind speed
    float solarR=0; ///Local variable to store the solar radiation
    float ambientT=0; ///Local variable to store ambient temperature
};

#endif // PARSE_H

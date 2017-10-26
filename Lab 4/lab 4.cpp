/*
   CIS 22A - Lab 4
   Author: Doan Tri
   Date: 11/11/2016
   Description: This program presents the user with a menu of
   options to convert between different units. After a conversion
   the menu will be display th menu again for the user to keep
   choosing until the user choose the option to end the program.
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototype which hold the menu of conversion between units
void displayMenu();

//Function prototypes that perform calculations to convert between units
void CelsiusToFahrenheit();
void FahrenheitToCelsius();
void MileToKilometer();
void PoundToKilogram();
void FeetToMeter();
void InchToMillimeter();

    int option;                             //Hold value of options user input from 1 to 7
    double new_Unit,                        //Hold the new units after converted
    degree_Fahrenheit, degree_Celsius,      //Hold temperature in degree Fahrenheit
    pound,                                  //Hold weight measurement unit in pound
    feet,                                   //Hold length measurement unit in feet
    mile,                                   //Hold distance measurement unit in mile
    inch;                                   //Hold distance measurement unit in inch

int main()
{
    //Display message to greet user and explain the purpose of the program
    cout << "Hello user!\n";
    cout << "This program uses to convert temperature, weight\nand distance units into a different unit of your choice.\n";
    cout << "Please check the menu and select one of the options.\n\n";

    do
    {
        //Function call to display the menu and let user choose an option
        displayMenu();
        cin >> option;

        while (option < 1 || option > 7)
        {
            cout << "PLease enter again a valid option: ";
            cin >> option;
        }

        switch(option)
        {
                //Convert from degree Celsius to Fahrenheit
                case 1:
                    CelsiusToFahrenheit();
                    break;

                //Convert from degree Fahrenheit to Celsius
                case 2:
                    FahrenheitToCelsius();
                    break;

                //Convert from mile units to kilometers
                case 3:
                    MileToKilometer();
                    break;

                //Convert from pound units to kilograms
                case 4:
                    PoundToKilogram();
                    break;

                //Convert from feet units to meters
                case 5:
                    FeetToMeter();
                    break;

                //Convert from inch units to millimeters
                case 6:
                    InchToMillimeter();
                    break;
                //End the program
                default:
                    cout <<"Program ending.\nThank you for using the program. Have a nice day!";
                    break;
        }
    } while (option >= 1 && option < 7);
}

//Function body to display the menu options
void displayMenu()
{
    cout << "\n\t    Conversion Menu\n";
    cout << "---------------------------------------\n";
    cout << "|     1. Celsius to Fahrenheit        |\n";
    cout << "|     2. Fahrenheit to Celsius        |\n";
    cout << "|     3. Mile to Kilometer            |\n";
    cout << "|     4. Pound to Kilogram            |\n";
    cout << "|     5. Feet to Meter                |\n";
    cout << "|     6. Inch to Millimeter           |\n";
    cout << "|     7. Quit the program             |\n";
    cout << "---------------------------------------\n";
    cout << "Please enter your option: ";
}

//Function body hold conversion from Celsius to Fahrenheit
void CelsiusToFahrenheit()
{
    cout << "Please enter your degrees in Celsius: ";
    cin >> degree_Celsius;
    new_Unit = (degree_Celsius*9/5)+32;
    cout << degree_Celsius << " degrees in Celsius is equal to " << setprecision(2) << fixed << new_Unit << " degrees in Fahrenheit.\n";
}

//Function body hold conversion from Fahrenheit to Celsius
void FahrenheitToCelsius()
{
    cout << "Please enter your degrees in Fahrenheit: ";
    cin >> degree_Fahrenheit;
    new_Unit = (degree_Fahrenheit-32)*5/9;
    cout << degree_Fahrenheit << " degrees in Fahrenheit is equal to " << setprecision(2) << fixed << new_Unit << " degrees in Celsius.\n";
}

//Function body hold conversion from Mile to Kilometer
void MileToKilometer()
{
    cout << "Please enter your mile unit: ";
    cin >> mile;
    new_Unit = mile / 0.62137;
    cout << mile << " miles is equal to " << setprecision(2) << fixed << new_Unit << " kilometers.\n";
}

//Function body hold conversion from Pound to Kilogram
void PoundToKilogram()
{
    cout << "Please enter your pound unit: ";
    cin >> pound;
    new_Unit = pound / 2.2046;
    cout << pound << " pounds is equal to " << setprecision(2) << fixed << new_Unit << " kilograms.\n";
}

//Function body hold conversion from Feet to Meter
void FeetToMeter()
{

    cout << "Please enter your feet unit: ";
    cin >> feet;
    new_Unit = feet / 3.2808;
    cout << feet << " feet is equal to " << setprecision(2) << fixed << new_Unit << " meters.\n";
}

//Function body hold conversion from Inch to Millimeter
void InchToMillimeter()
{
   cout << "Please enter your inch unit: ";
   cin >> inch;
   new_Unit = inch / 0.039370;
   cout << inch << " inches is equal to " << setprecision(2) << fixed << new_Unit << " millimeters.\n";
}


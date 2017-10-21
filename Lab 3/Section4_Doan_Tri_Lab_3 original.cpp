/*
   CIS 22A - Lab 3
   Author: Doan Tri
   Date: 10/28/2016
   Description: This program presents the user with a menu of
   options to convert between different units. The user choose one
   type of conversion, the program prints the converted value.
*/

#include <iostream>
using namespace std;

void displayMenu();                         // function prototype

int main()
{
    int option, new_Unit,                   //Declare options to convert and new unit after conversion
    degree_Fahrenheit, degree_Celsius,      //Temperature degree unit
    pound, kilogram,                        //Weight measurement unit
    feet, meter,                            //Length measurement unit
    mile, kilometer,                        //Linear measurement unit
    inch, millimeter;                       //Linear measurement unit

    //Display message to greet user and explain the purpose of the program
    cout << "Hello user!\n";
    cout << "This program uses to convert temperature, weight\nand distance unit into a different unit of your choice.\n";
    cout << "Please check the menu and select your option.\n\n";

    //Display the menu and let user choose an option
    displayMenu();                          //Prototype
    cin >> option;

    switch(option)
    {
         //Convert from degree Celsius to Fahrenheit
         case 1:
             cout << "Please enter your degrees in Celsius: ";
             cin >> degree_Celsius;
             new_Unit = (degree_Celsius*9/5)+32;
             cout << degree_Celsius << " degrees in Celsius is equal to " << new_Unit << " degrees in Fahrenheit.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
             break;

         //Convert from degree Fahrenheit to Celsius
         case 2:
             cout << "Please enter your degrees in Fahrenheit: ";
             cin >> degree_Fahrenheit;
             new_Unit = (degree_Fahrenheit-32)*5/9;
             cout << degree_Fahrenheit << " degrees in Fahrenheit is equal to " << new_Unit << " degrees in Celsius.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
             break;

        //Convert from mile units to kilometers
         case 3:
             cout << "Please enter your mile unit: ";
             cin >> mile;
             new_Unit = mile / 0.62137;
             cout << mile << " miles is equal to " << new_Unit << " kilometers.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
             break;

         //Convert from pound units to kilograms
         case 4:
             cout << "Please enter your pound unit: ";
             cin >> pound;
             new_Unit = pound / 2.2046;
             cout << pound << " pounds is equal to " << new_Unit << " kilograms.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
             break;

         //Convert from feet units to meters
         case 5:
             cout << "Please enter your feet unit: ";
             cin >> feet;
             new_Unit = feet / 3.2808;
             cout << feet << " feet is equal to " << new_Unit << " meter.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
            break;

         //Convert from inch units to millimeters
          case 6:
             cout << "Please enter your inch unit: ";
             cin >> inch;
             new_Unit = inch / 0.039370;
             cout << inch << " inches is equal to " << new_Unit << " millimeters.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
            break;

         //Quit program option
         case 7:
             cout << "Program ending.\n";
             break;

          //Invalid variable
          default:
             cout << "The valid choices are 1 through 7.\nPlease run the program again and select one of those.\nThank you!";
    }
    return 0;
}

//Display the menu function
void displayMenu()
{
cout << "\t\tConversion Menu\n";
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


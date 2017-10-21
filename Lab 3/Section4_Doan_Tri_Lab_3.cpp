/*
   CIS 22A - Lab 4
   Author: Doan Tri
   Date: 11/11/2016
   Description: This program presents the user with a menu of
   options to convert between different units. The user choose one
   type of conversion, the program prints the converted value. If the user
   input invalid option, the program will reopen the menu to choose again.
   For lab 3 you will add 4 other types of conversions to your lab 2 program. You can choose among length, weight, volume, speed or any other type of conversion you would like your program to do. Refer to http://www.metric-conversions.org/ for ideas and formulas. Round answers to up to two decimal places.

Present the user with a menu of options. Menu of options should be in a separate function.
Use a switch statement to run through the different options.

Include a header comment at the beginning of your code with a brief description of your program, course, lab number, author and date. Additionally, add comments throughout your source code to make it more legible. You don't have to comment each line, but write enough comments to explain your reasoning. Also, comment variables that are not self-explanatory.
Make sure the program compiles and runs correctly.
This lab must be your own original code. Copies will receive zero grade regardless of who wrote the original and who copied.
Rename the main.cpp following the format:
SectionNumber_LastName_FirstName_Lab3.cpp
Submit your source code through Catalyst.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void displayMenu();                         // function prototype to display the menu options

int main()
{
    int option;                             // Hold value of options user input from 1 to 7
    double new_Unit,
    degree_Fahrenheit, degree_Celsius,      // Hold temperature in degree Fahrenheit
    pound,                                  // Hold weight measurement unit in pound
    feet,                                   // Hold length measurement unit in feet
    mile,                                   // Hold distance measurement unit in mile
    inch;                                   // Hold distance measurement unit in inch

    //Display message to greet user and explain the purpose of the program
    cout << "Hello user!\n";
    cout << "This program uses to convert temperature, weight\nand distance unit into a different unit of your choice.\n";
    cout << "Please check the menu and select your option.\n\n";
do
{
    //Display the menu and let user choose an option
    displayMenu();                                         //Prototype
    cin >> option;

    switch(option)
    {
         //Convert from degree Celsius to Fahrenheit
         case 1:
             cout << "Please enter your degrees in Celsius: ";
             cin >> degree_Celsius;
             new_Unit = (degree_Celsius*9/5)+32;
             cout << degree_Celsius << " degrees in Celsius is equal to " << setprecision(2) << fixed << new_Unit << " degrees in Fahrenheit.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
             break;

         //Convert from degree Fahrenheit to Celsius
         case 2:
             cout << "Please enter your degrees in Fahrenheit: ";
             cin >> degree_Fahrenheit;
             new_Unit = (degree_Fahrenheit-32)*5/9;
             cout << degree_Fahrenheit << " degrees in Fahrenheit is equal to " << setprecision(2) << fixed << new_Unit << " degrees in Celsius.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
             break;

        //Convert from mile units to kilometers
         case 3:
             cout << "Please enter your mile unit: ";
             cin >> mile;
             new_Unit = mile / 0.62137;
             cout << mile << " miles is equal to " << setprecision(2) << fixed << new_Unit << " kilometers.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
             break;

         //Convert from pound units to kilograms
         case 4:
             cout << "Please enter your pound unit: ";
             cin >> pound;
             new_Unit = pound / 2.2046;
             cout << pound << " pounds is equal to " << setprecision(2) << fixed << new_Unit << " kilograms.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
             break;

         //Convert from feet units to meters
         case 5:
             cout << "Please enter your feet unit: ";
             cin >> feet;
             new_Unit = feet / 3.2808;
             cout << feet << " feet is equal to " << setprecision(2) << fixed << new_Unit << " meter.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
            break;

         //Convert from inch units to millimeters
          case 6:
             cout << "Please enter your inch unit: ";
             cin >> inch;
             new_Unit = inch / 0.039370;
             cout << inch << " inches is equal to " << setprecision(2) << fixed << new_Unit << " millimeters.\n";
             cout << "Thank you for using the program.\nHave a nice day!";
            break;

         //Quit program option
         case 7:
             cout << "Program ending.\n";
             break;
    }
}
while (option <= 1 || option > 7);
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


/*
   CIS 22A - Lab 3
   Author: Doan Tri
   Date: 10/28/2016
   Description: This program use switch statement allows users to convert many conversions.
   Present the user with a menu of options. When the user chooses the type of conversion, your
   program should print the converted value and print the menu of options again, so the user can choose a different conversion
*/

#include <iostream>
using namespace std;
int main()
    //Declare variables option, degree in Fahrenheit, Celsius and the new temperature.
    int option, degree_Fahrenheit, degree_Celsius, newTemp;
    //Display message to greet user
    cout << "Hello user!\n";
    //Display message telling the purpose of the program
    cout << "This program uses to convert temperature from degree Celsius to degree Fahrenheit or vice-versa.\n";
    //Display message to choose option of convert Celsius to Fahrenheit or vice-versa
    cout << "Press 1 and enter to convert degrees from Celsius to Fahrenheit\n";
    cout << "Press 2 and enter to convert degrees from Fahrenheit to Celsius\n";
    //Input option variable 1 or 2
    cin >> option;
    // If option is 1, perform this operation
switch(option)
{
case 1:
        //Ask users to enter variable in degree Celsius
        cout << "Please enter your degrees in Celsius: ";
        cin >> degree_Celsius;
        //Calculation
        newTemp = (degree_Celsius*9/5)+32;
        //Display the result in degree Fahrenheit
        cout << degree_Celsius << " degrees in Celsius is equal to " << newTemp << " degrees in Fahrenheit.\n";
        cout << "Thank you for using the program.\nHave a nice day!";
        break;


    //If option is 2, perform this operation
case 2:
         //Ask users to enter variable in degree Fahrenheit
        cout << "Please enter your degrees in Fahrenheit: ";
        cin >> degree_Fahrenheit;
        //Calculation
        newTemp = (degree_Fahrenheit-32)*5/9;
        //Display result in degree Celsius
        cout << degree_Fahrenheit << " degrees in Fahrenheit is equal to "<< newTemp << " degrees in Celsius.\n";
        cout << "Thank you for using the program.\nHave a nice day!";
        break;

     //Invalid variable
    default:
         //Ask users to re-open and try again
        cout << "The valid choices are 1 and 2.\nPlease run the program again and select one of those.\nThank you!";
    return 0;
}

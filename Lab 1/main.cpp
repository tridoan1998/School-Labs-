/*CIS 22A - Lab 1
   Author: Tri Doan
   Date: 10/14/16
   Description: This program uses to convert temperature from Fahrenheit to Celsius degree */
#include <iostream>
using namespace std;
int main()
{
    //Input integer Fahrenheit and Celsius in degree
    int fahrenheit, celsius;

    // Display greeting message
    cout <<"Hello users!\n";
    //Display the program purpose
    cout <<"This program uses to convert temperature from Fahrenheit to Celsius.\n";
    // Prompts the user to enter a value that represents temperature in degrees Fahrenheit
    cout <<"Enter your temperature in Fahrenheit: ";
    cin >> fahrenheit;

    //Calculation
    celsius = (fahrenheit - 32) * 5 / 9;

    //Display the result in Celsius
    cout << fahrenheit << " degrees" << " in Fahrenheit equal to " << celsius << " degrees in Celsius.\n";
    //Display good bye message
    cout << "Thank you for using the program.\nHave a nice day!";
    return 0;
}

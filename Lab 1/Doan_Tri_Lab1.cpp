/*CIS 22A - Lab 1
   Author: Doan Tri
   Date: 10/14/16
   Description: This program uses to convert degrees temperature from Fahrenheit to Celsius*/
#include <iostream>
using namespace std;
int main()
{
    //Input variable integer Fahrenheit and Celsius in degrees
    int degrees_Fahrenheit, degrees_Celsius;

    //Display greeting message
    cout <<"Hello users!\n";
    //Display the program purpose
    cout <<"This program uses to convert degrees temperature from Fahrenheit to Celsius.\n";
    //Prompts the user to enter a value that represents temperature in degrees Fahrenheit
    cout <<"Please enter your temperature in Fahrenheit: ";
    cin >> degrees_Fahrenheit;

    //Calculation from Fahrenheit to Celsius degrees
    degrees_Celsius = (degrees_Fahrenheit - 32) * 5 / 9;

    //Display the result in Celsius
    cout << degrees_Fahrenheit << " degrees" << " in Fahrenheit equal to " << degrees_Celsius << " degrees in Celsius.\n";
    //Display good bye message
    cout << "Thank you for using the program.\nHave a nice day!";
    return 0;
}

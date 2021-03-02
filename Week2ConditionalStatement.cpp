//Programmer:	Jay Anino. ID 270115050 
//Yoobee College Bachelor of Software Engineering 
//Reference:	Learning Conditional Statement
//Description:	This program will ask for a number and checks if it's an even or odd number.
//Guarantee:	Program works to full specifications 

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "This program will check if the entered number is even or odd" << endl;

    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) //Checks if given number is even else print odd
        cout << "The number " << num << " is even";
    else 
        cout << "The number " << num << " is odd";

    return 0;
}
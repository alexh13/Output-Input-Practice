#include <iostream> // Must be in every program containing cout
using namespace std;  // cout is defined in namespace std

int main() // where the program will start
{ // beginning
    cout << "Hello, World!" << endl; // cout is what will output on the screen
    cout << "It's sure cold out here!" << endl; // << enl; means end line
    cout << "Bo said, \"You should wear a jacket!\"" << endl; // use backslashes for double quote strings

    // Our employees make $12 an hour.
//int hours;
//cin >> hours; // wait for the user to type in a value and put that value into hoursWorked var
    int hoursWorked; // created a variable that can be used to store an integer
    int paycheckAmount;
    int payRate;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cout << "Enter rate of pay: ";
    cin >> payRate;

    if (hoursWorked <= 40) {
        paycheckAmount = hoursWorked * payRate;
    } else {
        paycheckAmount = 40 * payRate + (hoursWorked - 40) * payRate * 1.5;
    }

    cout << "the amount of the paycheck is "
         << paycheckAmount << " dollars." << endl;
    return 0;
} // end
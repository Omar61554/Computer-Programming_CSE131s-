/*******************************************************************************************************************/
/************** AUTHOR: OMAR KHALED ********************************************************************************/
/************** DATE: 11/8/2023     ********************************************************************************/
/************** FILE: Q7            ********************************************************************************/
/*******************************************************************************************************************/

/*7. A year with 366 days is called a leap year. A year is a leap year if it is divisible by four (for
example, 1980), except that it is not a leap year if it is divisible by 100 (for example, 1900);
however, it is a leap year if it is divisible by 400 (for example, 2000). There were no
exceptions before the introduction of the Gregorian calendar on October 15, 1582 (1500
was a leap year). Write a program that asks the user for a year and computes whether that
year is a leap year. Your program should contain a single if statement.*/

#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int year;
        cout << "Enter a year: ";
        cin >> year;
        if (cin.fail())
        {
            cout << "Invalid input" << endl;
            cin.clear();
            cin.ignore(1000, '\n'); // ignore 1000 characters or until new line
        }
        else
        {
            if ((year % 4 == 0 && (year < 1582 || year % 100 != 0)) || year % 400 == 0)

                cout << year << " is a leap year" << endl;

            else
                cout << year << " is not a leap year" << endl;
        }
    }
    return 0;
}
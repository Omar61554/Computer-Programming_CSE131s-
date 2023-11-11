/*******************************************************************************************************************/
/************** AUTHOR: OMAR KHALED ********************************************************************************/
/************** DATE: 11/11/2023    ********************************************************************************/
/************** FILE: Q11           ********************************************************************************/
/*******************************************************************************************************************/

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)  // Prime numbers greater than 3 can be written in the form 6k ± 1 
            return false;
    }
    return true;
}

int main()
{
    int Number = 0;
    int i = 2;
    cout << "*************************************Prime Numbers*************************************"
        << "\n";

    cout << "Enter a positive Number: ";
    cin >> Number;
    if (cin.fail())
    {
        cout << "Error: Invalid Input"
            << "\n";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    else
    {

        while (i <= Number)
        {

            if (isPrime(i))
            {

                cout << i
                     << "\n"; // print the prime number
                i++;
            }
            else
            {
                i++;
            }
        }
    }
    system("pause");
    return 0;
}
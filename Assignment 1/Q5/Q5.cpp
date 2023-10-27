/*******************************************************************************************************************/
/************** AUTHOR: OMAR KHALED ********************************************************************************/
/************** DATE: 10/28/2023    ********************************************************************************/
/************** FILE: Q5            ********************************************************************************/
/*******************************************************************************************************************/

/*5. Write a program that asks for an integer >= 1000 and prints it with commas.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;

    // Prompt the user for an integer >= 1000
    cout << "Please enter an integer >= 1000: ";
    cin >> number;

    // Convert the number to string
    string numberString = to_string(number);

    // Insert commas at appropriate positions
    int commaPos = numberString.length() - 3;
    while (commaPos > 0) {
        numberString.insert(commaPos, ",");
        commaPos -= 3;
    }

    // Print the number with commas
    cout << numberString << "\n";

    return 0;
}
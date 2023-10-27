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

/*  Another solution using the modulus operator to extract the last three digits and print them in the simplest form

#include <iostream>
using namespace std;

int main() {
    int number;

    
    cout << "Please enter an integer >= 1000: ";
    cin >> number;

    
    cout << number / 1000 << "," << number % 1000 << "\n";

    return 0;
}

*/

// THE DIFFERENCE BETWEEN THE TWO SOLUTIONS IS THAT THE FIRST ONE PRINTS THE NUMBER WITH THE COMMAS,
// WHILE THE SECOND ONE PRINTS THE NUMBER IN THE SIMPLEST FORM (WITHOUT THE COMMAS) BUT WITH A COMMA IN BETWEEN THE FIRST AND LAST THREE DIGITS.
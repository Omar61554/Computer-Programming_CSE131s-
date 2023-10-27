/*******************************************************************************************************************/
/************** AUTHOR: OMAR KHALED ********************************************************************************/
/************** DATE: 10/28/2023    ********************************************************************************/
/************** FILE: Q3            ********************************************************************************/
/*******************************************************************************************************************/

/*3. Write a program that asks for the lengths of the sides of a rectangle and prints the area, perimeter, and length of the diagonal.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double length, width;

    // Prompt the user for the lengths of the sides
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the area
    double area = length * width;

    // Calculate the perimeter
    double perimeter = 2 * (length + width);

    // Calculate the length of the diagonal using the Pythagorean Theorem
    double diagonal = sqrt((length * length) + (width * width));

    // Print the results
    cout << "Area: " << area << "\n";
    cout << "Perimeter: " << perimeter << "\n";
    cout << "Length of diagonal: " << diagonal << "\n";

    return 0;
}
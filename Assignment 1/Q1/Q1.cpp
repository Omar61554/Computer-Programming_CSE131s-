/*******************************************************************************************************************/
/************** AUTHOR: OMAR KHALED ********************************************************************************/
/************** DATE: 10/28/2023    ********************************************************************************/
/************** FILE: Q1            ********************************************************************************/
/*******************************************************************************************************************/


/*1. Write a program that asks for two integers and prints their sum, difference, product, average, distance (absolute value of the difference), maximum, and minimum.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2;

    // Prompt the user for two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Calculate the sum
    int sum = num1 + num2;

    // Calculate the difference
    int diff = num1 - num2;

    // Calculate the product
    int product = num1 * num2;

    // Calculate the average
    double average = (num1 + num2) / 2.0;

    // Calculate the distance (absolute value of the difference)
    int distance = abs(num1 - num2);

    // Calculate the maximum
    int maximum = max(num1, num2);

    // Calculate the minimum
    int minimum = min(num1, num2);

    // Print the results
    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << diff << "\n";
    cout << "Product: " << product << " \n";
    cout << "Average: " << average << " \n";
    cout << "Distance: " << distance << " \n";
    cout << "Maximum: " << maximum << " \n";
    cout << "Minimum: " << minimum << "\n";

    return 0;
}
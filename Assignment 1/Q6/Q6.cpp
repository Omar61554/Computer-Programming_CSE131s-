/*******************************************************************************************************************/
/************** AUTHOR: OMAR KHALED ********************************************************************************/
/************** DATE: 10/28/2023    ********************************************************************************/
/************** FILE: Q6            ********************************************************************************/
/*******************************************************************************************************************/


/*6. Write a program that asks for the due date of the next assignment (hour, minutes).
Then print the number of minutes between the current time and the due date.*/

#include <iostream>
#include <chrono>


int main() {
    // Get the current time
    auto currentTime = std::chrono::system_clock::now();
    std::time_t currentTime_t = std::chrono::system_clock::to_time_t(currentTime);
    struct std::tm currentTime_tm;
    localtime_s(&currentTime_tm, &currentTime_t);

    // Get the due date from the user
    int dueHour, dueMinute;
    std::cout << "Enter the due date (hour and minutes): ";
    std::cin >> dueHour >> dueMinute;

    // Set the due date time
    currentTime_tm.tm_hour = dueHour;
    currentTime_tm.tm_min = dueMinute;
    currentTime_tm.tm_sec = 0;

    // Convert the due date time to a time_point
    auto dueTime = std::chrono::system_clock::from_time_t(std::mktime(&currentTime_tm));

    // Calculate the duration between current time and due date
    auto duration = std::chrono::duration_cast<std::chrono::minutes>(dueTime - currentTime);

    // Print the number of minutes
    std::cout << "Number of minutes between current time and due date: " << duration.count() << std::endl;

    return 0;
}
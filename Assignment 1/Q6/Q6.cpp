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
    localtime_s(&currentTime_tm, &currentTime_t);  // localtime_s is a secure version of localtime that may pass THE BUFFER to localtime to fill it with data instead of returning a pointer to static data that may be overwritten by subsequent calls to any of the date and time functions.

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





/*  Another solution using ctime library to get the current time and the due date time 

#include <iostream>
#include <ctime>
using namespace std;

int main() {

    time_t currentTime = time(nullptr);
    tm* currentTime_tm = localtime(&currentTime);

    
    int dueHour, dueMinute;
    cout << "Enter the due date (hour and minutes): ";
    cin >> dueHour >> dueMinute;

    
    currentTime_tm->tm_hour = dueHour;
    currentTime_tm->tm_min = dueMinute;
    currentTime_tm->tm_sec = 0;


    time_t dueTime =mktime(currentTime_tm);


    int minutesDiff = static_cast<int>(difftime(dueTime, currentTime) / 60);


    cout << "Number of minutes between current time and due date: " << minutesDiff << "\n"";

    return 0;
}
 */





    /*the difference between the two solutions is that the first one uses the chrono library to get the current time and the due date time, 
    while the second one uses the ctime library to get the current time and the due date time.
    the first solution is more modern and more accurate than the second one.
    runtime of the first solution is O(1) while the runtime of the second solution is O(n). */









/*
    Another solution where the user enters the due date and the current time

#include <iostream>

using namespace std;
int main() {
    int dueHour, dueMinute, currentHour, currentMinute;
    cout << "Enter the due date (hour and minutes): ";
    cin >> dueHour >> dueMinute;
    cout << "Enter the current time (hour and minutes): ";
    cin >> currentHour >> currentMinute;
    int minutesDiff = (dueHour - currentHour) * 60 + (dueMinute - currentMinute);
    cout << "Number of minutes between current time and due date: " << minutesDiff << "\n";
    return 0;
}

*/
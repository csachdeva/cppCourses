#include <iostream>
#include <chrono>

using namespace std::literals::chrono_literals;

int main () {
    std::cout << std::endl;

    typedef std::chrono::duration <long long, std::ratio<2700>> hours;
    auto schoolHour = hours(1);
    // auto schoolHour = 45min;

    auto shortBreak = 300s;
    auto longBreak  = 0.25h;

    auto schoolWay = 15min;
    auto homeWork  = 2h;

    auto schoolDayInSecond = 2 * schoolWay + 6 * schoolHour + 4 * shortBreak + longBreak;

    std::cout << "School Day in Second:      " << schoolDayInSecond.count() << std::endl;

    std::chrono::duration <double, std::ratio<3600>> schoolDayInHour = schoolDayInSecond;
    std::chrono::duration <double, std::ratio<60>> schoolDayInMinutes= schoolDayInSecond;
    std::chrono::duration <double, std::ratio<1, 1000>> schoolDayInMilliSecond = schoolDayInSecond;
     
    std::cout << "School Day in Hour:        " << schoolDayInHour.count() << std::endl;
    std::cout << "School Day in Minutes:     " << schoolDayInMinutes.count() << std::endl;
    std::cout << "School Day in MilliSecond: " << schoolDayInMilliSecond.count() << std::endl;
    std::cout << std::endl;
    return 0;
}

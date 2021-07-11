/**
 * 7.编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个void函数，后者以下面这样的格式显示这两个值；
 * Enter the number of hours: 9
 * Enter the number of minutes: 28
 * Time: 9:28
*/
#include <iostream>

void showTime(int hours, int mintes);

int main()
{
    int hours = 0, minutes = 0;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    showTime(hours,minutes);
    return 0;
}

void showTime(int hours, int minutes)
{
    std::cout << "Time: " << hours << ":" << minutes << std::endl;
}
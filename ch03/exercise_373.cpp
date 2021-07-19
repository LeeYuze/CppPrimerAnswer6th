/**
 * 编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
 * 1度为60分，1分等于60秒，请以符号常量的方式表示这些值。
 * 对于每个输入值，应使用一个独立的变量存储它。下面是该程序运行时的情况：
 * Enter a latitude in degrees, minutes, and seconds:
 * First, enter the degrees: 37
 * Next, enter the minutes of arc: 51
 * Finally, enter the seconds of arc: 19
 * 37 degrees, 51 minutes, 19seconds = 37.8553 degrees
*/
#include <iostream>

int main()
{
    int unit = 60;
    int degrees = 0, minutes = 0, seconds = 0;
    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;
    std::cout << "First, enter the degrees: ";
    std::cin >> degrees;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minutes;
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> seconds;
    // 以度为单位显示该纬度
    // 度 + 度（分 / 60） + 度 （秒 / 60 / 60）
    float latitude = degrees + (float)minutes / unit + (float)seconds / unit / unit;
    std::cout << degrees <<" degrees, "<< minutes <<" minutes, "<< seconds <<"seconds = "<< latitude <<" degrees" << std::endl;
    return 0;
}
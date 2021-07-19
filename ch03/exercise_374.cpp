/**
 * 编写一个程序，要求用户以整数方式输入秒数（使用long或long long变量存储），然后以天、小时、分钟和秒的方式显示这段时间。
 * 使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似：
 * Enter the number of seconds: 31600000
 * 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/
#include <iostream>

int main()
{
    unsigned long seconds = 0;
    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;
    int s = 0 , m = 0 , h = 0 ,d = 0;
    s = seconds % 60;
    m = seconds / 60 % 60;
    h = seconds / 60 / 60 % 24;
    d = seconds / 60 / 60 / 24;
    std::cout << seconds <<" seconds = "<< d <<" days, "<< h <<" hours, "<< m <<" minutes, "<< s <<" seconds" << std::endl;
    return 0;
}
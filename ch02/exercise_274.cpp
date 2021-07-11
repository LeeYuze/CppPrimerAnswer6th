/*
* 4.编写一个程序，让用户输入其年龄，然后显示该年龄包含多个月，如下所示：
* Enter your age:29
*/
#include <iostream>
#define MONTHS 12

int main()
{
    int age = 0;
    std::cout << "Enter you age：";
    std::cin >> age;
    std::cout << "include " << MONTHS * age << " month" << std::endl;
    return 0;
}
/*
* 2.编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（一long等于220码）
*/
#include <iostream>

int main()
{
    int unitLong = 220, i = 0;
    std::cout << "Please enter long " << std::endl;
    std::cin >> i;
    std::cout << "ma = " << i * unitLong << std::endl;
    return 0;
}
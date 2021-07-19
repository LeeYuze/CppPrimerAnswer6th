/**
 * 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。该程序使用下划线字符来指示输入位置，另外，使用一个const符号常量来表示转换因子。
*/
#include <iostream>

int main()
{
    const int unit = 12;
    int height = 0, foot = 0, inch = 0;
    std::cout << "Please enter your height______\b\b\b\b\b\b ";
    std::cin >> height;
    foot = height / unit;
    inch = height % unit;
    std::cout << "foot = " << foot << " inch = " << inch << std::endl;
    return 0;
}
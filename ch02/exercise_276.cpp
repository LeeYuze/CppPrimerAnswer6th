/*
* 6.编写一个程序，其main()调用一个用户定义的函数（以光年值为参数，并返回对应天文单位值）。
* 该程序按下面的格式要求用户输入光年值，并显示结果：
* Enter the number of light years：4.2
* 4.2 light years = 265608 astronomical units.
*/
#include <iostream>

double calcAstronomical(double lightYears);

int main()
{
    double lightYears = 0.0, astronomical = 0.0;
    std::cout << "Enter the number of light years：";
    std::cin >> lightYears;
    astronomical = calcAstronomical(lightYears);
    std::cout << lightYears << " light years = " << astronomical << " astronomical units." << std::endl;
    return 0;
}

double calcAstronomical(double lightYears)
{
    int unit = 63240;
    return lightYears * unit;
}
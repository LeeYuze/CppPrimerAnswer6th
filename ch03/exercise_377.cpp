/**
 * 编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量——每加仑多少英里。
 * 注意，除了使用不同的单位计量外，美国方法（距离/燃料）与欧洲方法（燃料/距离）相反。
 * 100公里等于62.14英里，1加仑等于3.875升。
 * 因此，19mpg大约合12.41/100km，127mpg大约合8.71/100km。
*/
#include <iostream>

int main()
{
    const double KM100_PER_Mile = 62.14;
    const double GALLON_PER_L = 3.875;
    double km100UsedL = 0.0, gallonPerMile = 0.0;
    std::cout << "Enter the number of 100Km used L:";
    std::cin >> km100UsedL;
    gallonPerMile = KM100_PER_Mile / (km100UsedL / GALLON_PER_L);
    std::cout << "每加仑可以走" << gallonPerMile << "英里" << std::endl;
    return 0;
}
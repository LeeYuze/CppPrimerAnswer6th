/**
 *  编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量为一加仑的里程。
 * 如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，
 * 然后指出欧洲风格的结果——即每100公里的耗油量（升）。
*/
#include <iostream>

int main()
{
    float mileage = 0.0, gallon = 0.0;
    std::cout << "Enter the number of mileage:";
    std::cin >> mileage;
    std::cout << "Enter the number of gallon:";
    std::cin >> gallon;
    // 一加仑转升
    const float oneGallonToL = 3.875;
    // 汽车耗油量为一加仑的里程
    float oneGallonGoMile = mileage / gallon;
    // 每1公里的耗油量（升）
    const float oneMileUsedL = gallon / mileage * oneGallonToL;
    float oneHunredMileUsedGallon = oneMileUsedL * 100;
    return 0;
}
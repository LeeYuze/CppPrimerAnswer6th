/*
* 5.编写一个程序，其中的main()调用一个用户定义函数（1⃣️摄氏温度值为参数，并返回相应的华氏温度值）。改程序按下面的格式要求用户输入摄氏温度值，并显示结果：
* Please enter a Celsius value：20
* 20 degrees Celsius is 68 degrees Fahrenhit.
*/
#include <iostream>

int calcFahrenhit(int celsius);

int main()
{
    int celsius = 0, fahrenhit = 0;
    std::cout << "Please enter a Celsius value：";
    std::cin >> celsius;
    fahrenhit = calcFahrenhit(celsius);
    std::cout << celsius << " degrees Celsius is " << fahrenhit << " degrees Fahrenheit." << std::endl;
    return 0;
}

int calcFahrenhit(int celsius)
{
    return 1.8 * celsius + 32.0;
}
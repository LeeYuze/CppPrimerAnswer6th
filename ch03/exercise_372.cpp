/*
* 编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用3个变量来存储这些信息。）
* 该程序报告其BMI（Body Mass Index，体重指数）。为了计算BMI， 该程序以英寸的方式指出用户的身高（1英尺为12英寸），
* 并将以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米）。然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅）。
* 最后，计算相应的BMI——体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。
*/
#include <iostream>

int main()
{
    int foot = 0, inch = 0, pound = 0;
    std::cout << "Please enter your foot _____\b\b\b\b\b";
    std::cin >> foot;
    std::cout << "Please enter your inch _____\b\b\b\b\b";
    std::cin >> inch;
    std::cout << "Please enter your pound _____\b\b\b\b\b";
    std::cin >> pound;

    const int inchToFootUnit = 12;
    const float inchToMetre = 0.0254;
    const float kgToPound = 2.2;
    // 该程序以英寸的方式指出用户的身高（1英尺为12英寸）
    int heightInch = foot * inchToFootUnit + inch;
    // 并将以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米）
    float heightMetre = (float)heightInch * inchToMetre;
    // 将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅）
    float weightKg = (float)pound / kgToPound;
    // 计算相应的BMI——体重（千克）除以身高（米）的平方
    float bmi = weightKg / (heightMetre * heightMetre);

    std::cout << "metre = " << heightMetre << " kg = " << weightKg << " bmi = " << bmi << std::endl;
    return 0;
}
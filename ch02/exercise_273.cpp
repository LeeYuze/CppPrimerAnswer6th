/*
* 3.编写一个C++程序，它使用3个用户定义函数（包括main（）），并生成下面的输出；
* Three bilnd mice
* Three bilnd mice
* See how they run
* See how they run
* 其中一个函数要调用两次，该函数生成前两行；另一个函数也要被调用两次，生成其余输出内容；
*/
#include<iostream>

void mice();
void run();

int main()
{
    mice();
    mice();
    run();
    run();
    return 0;
}

void mice()
{
    std::cout << "Three blind mice" << std::endl;
}

void run()
{
    std::cout << "See how they run" << std::endl;
}
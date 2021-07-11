# 第2章 开始学习C++

## 2.6.1
> C++程序的模块叫什么？
```
叫函数，为什么呢？
C++每个程序都有一个函数，那就是主函数main()，所有简单的程序可以定义在额外的函数里，甚至主函数main()里，主要它完成一个功能，就可以视为模块。
```

## 2.6.2
> 下面的预处理器编译指令是做什么用？ </br> #include \<iostream>
```
该编译指令让预处理器将iostream文件的内容添加在程序中，在源代码被编译之前，添加或替换文本。
```

## 2.6.3
> 下面语句是做什么用的？ </br> using namespace std;
```
这叫做using编译指令，它使得std名称空间中所有名称都可以是用。
```

## 2.6.4
> 什么语句可以用来打印短语 “Hello，world”，然后开始新的一行？
```
std::cout << "Hello，world" << std::endl;
```

## 2.6.5
> 什么语句可以用来创建名为cheeses的整数变量？
```
int cheeses = 0;
```

## 2.6.6
> 什么语句可以用来将值32赋给变量cheeses?
```
cheeses = 32;
```

## 2.6.7
> 什么语句可以用来将键盘输入的值读入变量cheeses中？
```
std::cin >> cheeses;
```

## 2.6.8
> 什么语句可以用来打印 “We have X varieties of cheese,”，其中X为变量cheeses的当前值。
```
std::cout << "We have " << cheeses << " varieties of cheese,";
```

## 2.6.9
> 下面的函数原型指出了关于函数的哪些信息？ 
> <br /> int froop(double t);
> <br /> void rattle(int n);
> <br /> int prune(void);
```
int froop(double t);
该函数接受一个参数，为double类型(浮点类型)的数值，如果传入整数时，将以实数的形式出现，并返回一个整数。
```
```
void rattle(int n);
该函数接受一个参数，为int类型(整数类型)的数值，如果传入小树时，将只保留小数点左边部分,并没有返回值。
```
```
int prune(void);
该函数不接受任何参数，并返回一个整数。
关键字void明确指出，该函数不接受任何参数，如果省略void，让括号为空，则C++将其解释为不接受任何参数的隐式声明。
```

## 2.6.10
> 定义函数时，在什么情况下不必使用关键字return?
```
使用void关键字，定义函数返回值时，不必使用关键字return
如：void pp();
```

## 2.6.11
> 假设您编写main()函数包含如下代码
> <br /> cout << "Please enter your PIN：";
> <br />而编译器指出cout是个未知标识符。导致这种问题的原因很有可能是什么？指出3种修复这种问题的方法。
```
导致这种问题的原因很有可能是，没有引用iostream头文件并且使用std命名空间，或者引用了却没有使用std命名空间。

假设都引用头文件的情况下
#include<iostream>

第一种方法(using):
using namespace std;

第二种方法(部分 using):
using std::cout;

第三种方法(不使用 using):
std::cout << "Please enter your PIN：";
```
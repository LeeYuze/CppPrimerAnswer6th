# 第3章 处理数据

## 3.6.1
> 为什么C++有多种整型？
```
因为不同的整型适用于不同的情况，更小的整型可以占用更小的内存空间，更大的整型可以显示更大的数值。
```

## 3.6.2
> 声明与下述描述相符的变量
> <br />a. short整数，值为80
> <br />b. unsigned int 整数，值为42110
> <br />c. 值为 3000000000 的整数
```
a. short整数，值为80
short a = 80;

b. unsigned int 整数，值为42110
unsigned int a = 42110;

c. 值为 3000000000 的整数
long long a = 3000000000;
```

## 3.6.3
> C++提供了什么措施来防止超出整型的范围？
```
如果超越了限制，其值将为范围另一端的取值。
```

## 3.6.4
> 33L与33之间有什么区别？
```
首先，它们都是数字常量，33L表示为long的常量，33表示为int的常量
```

## 3.6.5
> 下面两条C++语句是否等价？
> <br /> char grade = 65;
> <br /> char grade = 'A';
```
并不真正等价。只有在使用ASCII码的系统上，第一条语句才能将grade设置成字母A，第二条语句还可以用于使用其他编码的系统。其次，65是一个int常量，而‘A’是一个char常量。
```

## 3.6.6
> 如何使用C++来找出编码88表示的字符？指出至少两种方法。
```
std::cout << (char)88 << std::endl;

std::cout.put((char)88);
```

## 3.6.7
> 将long值赋给float变量会导致舍入误差，将long值赋给double变量呢？将longlong值赋给double变量呢？
```
这个问题的答案取决于这两个类型的长度。如果long为4个字节，则没有损失。因为最大的long值将是2,147,483,647，即有10位数。由于double提供了至少15位有效数字，因而不需要进行任何舍入。long long类型可提供19位有效数字，超过了double 保证的15位有效数字。
```

## 3.6.8
> 下列C++表达式的结果分别是多少？
> <br /> a.8 * 9 + 2
> <br /> b.6 * 3 / 4
> <br /> c.3 / 4 * 6
> <br /> d.6.0 * 3 / 4
> <br /> e.15 % 4
```
a.8 * 9 + 2 = 74
b.6 * 3 / 4 = 4
c.3 / 4 * 6 = 0
d.6.0 * 3 / 4 = 4.5
e.15 % 4 = 3
```

## 3.6.9
> 假设x1和x2是两个double变量，您要将它们作为整数相加，再将结果赋给一个整型变量。请编写一条完成这项任务的C++语句。如果要将它们作为double值相加并转换为int呢？
```
int pos1 = (int)x1 + (int)x2;
int pos2 = (int)(x1 + x2);
```

## 3.6.10
> 下面每条语句声明的变量都是什么类型？
> <br />a. auto cars = 15
> <br />b. auto iou = 150.37f
> <br />c. auto level = 'B'
> <br />d. auto crat = U'/U00002155'
> <br />e. auto fract = 8.25f/2.5
```
a.int
b.float
c.char
d.char32_t
e.double
```
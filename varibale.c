//变量
//变量可以存储不同类型的数据，如整数、浮点数、字符等
//在C语言中，变量必须在使用之前声明，并且可以在程序的不同作用域中使用
#include <stdio.h>
int main()
{
    int age;              // 创建一个整型变量，未初始化
    age = 18;             // 赋值

    float score = 95.5f;  // 创建 float 变量并初始化
    char grade = 'A';     // 创建字符变量
    double pi = 3.14159;  // 创建双精度浮点变量
    //输出变量（注意特殊用法）
    printf("age = %d\n", age);
    printf("score = %.1f\n", score);
    printf("grade = %c\n", grade);
    printf("pi = %.5f\n", pi);

    return 0;
}

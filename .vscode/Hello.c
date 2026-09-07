#include <stdio.h>
//加载标准输入输出头文件，类似于加载依赖
int main()
//int:设置函数类型，返回一个整数
//main:主函数，C语言规定先从main函数开始运行
//void:表示这个函数不需要接收任何输入参数
{//函数体开始，办¥大括号内包括main函数的所有代码
    printf("Hello World");
    //printf:向终端打印输出函数
    //双引号里面叫字符串，原样输出里面的文字
    return 0;
    //return:把数值返回给调用者，结束当前函数
}
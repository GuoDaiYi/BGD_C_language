/*
题目:求值
题目描述:键盘输入x的值，求方程y=x的平方+2x-10所对应的y的值。
输入说明:x
输出说明:对应的y值
*/
#include <stdio.h>
int main()
{
    double x,y=0;
    scanf("%lf",&x);
    y = x * x + 2 * x - 10;
    printf("%g",y);
    return 0;
}
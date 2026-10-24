/*题目:求两数的和与差
输入说明:整数1整数2输出说明:两个整数的和两个整数的差样例输入:
题目描述:从键盘输入两个整数，求这两个整数的和与差(第一个数减第二个数)并输出*/
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",a+b,a-b);
    return 0;
}
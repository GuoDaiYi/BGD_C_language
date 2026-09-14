//输入一个立方体的长宽高，计算立方体的体积并输出
#include <stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=a*b*c;
    printf("The sum of cube is %d\n",sum);
    return 0;
}
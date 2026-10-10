/*
放入三个数字，进行比大小，从小到大排列
只有整数，有负数
*/
#include <stdio.h>
int main()
{
    //开始载入三个数字和中间变量m
    int a,b,c,m;
    printf("请输入三个数字，只能为整数:\n");
    scanf("%d %d %d",&a,&b,&c);
    //两层判断，调换顺序
    if (a>b){
        m=a;
        a=b;
        b=m;
    }
    if (b>c){
        m=b;
        b=c;
        c=m;
    }
    if (a>b) {
        m=a;
        a=b;
        b=m;
    }
    printf("%d %d %d",a,b,c);
}
#include <stdio.h>
int main()
{
    double n,p,total;
    printf("请输入数量:\n");
    scanf("%lf",&n);
    printf("请输入单价:\n");
    scanf("%lf",&p);
    if(n>=500)
    {
        p=0.85*p;
    }
    else if (n>=300)
    {
        p=0.9*p;
    }
    else if (n>=100)
    {
        p=0.925*p;
    }
    else if (n>=50)
    {
        p=0.95*p;
    }
    else
    {
        p=p;
    }
    total=n*p;
    printf("总价为:%f\n",total);
}   
//本文件的目的是初识math库，math库是用于进行复杂数学运算的库
#include <stdio.h>
#include <math.h>
int main(){
    double x,y,total;
    printf("请输入被开方后的数字:");
    scanf("%lf",&x);
    x = sqrt(x);//开方函数：sqrt(x)
    printf("被开方后为:%0.15g\n",x);//自动去掉无意义小数:%g，保留15位小数有效精度:0.15g
    sleep(2);
    //这部分是幂函数公式
    printf("请分别输入x和y，分别作为底数和指数");//求幂函数
    scanf("%lf,%lf,&x,&y");
    x = pow(x,y);//先底数，后指数
    printf("得数为%g\n",x);
    sleep(2);
    //这部分是关于公式的嵌套，假设total为中间过渡用变量
    x,y,total = 0;
    total = 11 * (4 - 1) / 1.2;
    x = (total * (13 / 1.2)) / total + 2;
    y = (total * (130 / 1.2)) / total + 2;
    printf("x为:%g，y为:%g\n",x,y);

}
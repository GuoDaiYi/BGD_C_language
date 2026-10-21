/*
运输公司对用户计算运费
运输距离(以s表示，单位为千米)越远，单位运费(用C表示，以每吨·千米的运费为单位)越低。计算标准如下。
折扣的“变化点”都是250的倍数
在横轴上加一种坐标c，c的值为s/250
c代表250的倍数
当c<1时，表示s<250，无折扣
1≤c<2时，表示250≤s<500，折扣d=2%
2≤c<4时，d=5%;4≤c<8时，d=8%
8≤c<12时,d=10%
c≥12时,d=15%
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double s,c,w,d;//d为倍率
    //freight为总价格，s为距离，c为单位运费，w为重量
    printf("请输入运输距离，单位为千米：");scanf("%lf",&s);
    printf("请输入单位运费，单位为吨/千米：");scanf("%lf",&c);
    printf("请输入重量，单位为吨：");scanf("%lf",&w);
    int freight = s / 250;
    printf("总价的250倍数为：%d\n",freight);
    switch (freight)
    {
    case 0:d=1;break;
    case 1:
    case 2:
    case 3:d=0.95;break;
    case 4:case 5:case 6:case 7:d=0.92;break;
    case 8:case 9:case 10:case 11:d=0.9;break;
    default:
        if (freight >= 12) d = 0.85;
        else printf("未知错误\n");
        break;
    }
    double all = d * s * c * w;
    printf("你的最终折扣价为:%10.2lf\n",all);
}
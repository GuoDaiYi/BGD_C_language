/*
募集慈善基金10000元，有若干人捐款，每输入一个人的捐款数后，计算机就输出当时的捐款总和
当某一次输入捐款数后，总和达到或超过10000元时，即宣告结束，输出最后的累加值
*/
#include <stdio.h>
int main()
{
    double donate,total=0;
    while (donate <= 10000)
    {
        printf("请输入本次捐款金额：");
        scanf("%lf",&donate);
        total = donate + total;
        printf("捐款成功，目前金额：%.2f\n",total);
    }
    printf("捐款结束，最终金额：%.2f\n",donate);
    return 0;
}
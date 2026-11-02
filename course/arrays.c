#include <stdio.h>
int main(void){
    int i,score[10];
    for (int i = 0;i < 10;i++)
        {score[i]=i;}
    for (int i = 9;i >= 0;i--)
        {printf("%d\n",score[i]);}
    return 0;
}
/*
这是数组的第一课
int score[10]
指将一个十个格子的数组命名为score，但是未将数组内的十个值（格子）赋值
score[3]=6
指将第三个格子内的数赋值为6
*/
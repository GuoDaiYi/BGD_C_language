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
#include <stdio.h>
int plus(void){
  int i;
   int f[20]={1,1};
   for(i=2;i<20;i++)
      f[i]=f[i-2]+f[i-1];
   for(i=0;i<20;i++)
   {  if(i%5==0) printf("\n");
      printf("%12d",f[i]);
   }
   printf("\n");
}
/*
判断
年龄是否大于等于100岁
*/
#include <stdio.h>
int main()
{
    int a=0;
    printf("请输入你的年龄\n");
    scanf("%d",&a);
    if (a >= 100){
        printf("old\n");
    }
   else{
        printf("Not old\n");
   }
    return 0;
}
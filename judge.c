/*
判断，与或非
&& 并且
|| 或者
! 取反
*/
#include <stdio.h>
int main()
{
    int a=1;
    int b=2;
    int c=3;
    if (a+b == b+c){
        printf("Allowed\n");
    }
    else{
        printf("Not Allowed\n");
    }
}

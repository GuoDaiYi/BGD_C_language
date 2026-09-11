#include <stdio.h>
int main(){
    int sofy_money=200;
    int tv_money=sofy_money;
    sofy_money=0;
    printf("The Money in tv:%d\n",tv_money);
    printf("The Money in sofa:%d\n",sofy_money);
    return 0;
}
//示例内容：函数让程序分解
//任务：设置一个max函数，完成一个“求较大值”的子任务
//特别说明：由于代码设计，其实程序只具备判断a是否大于b的功能
#include <stdio.h>
int main()
{
    int max(int x,int y);
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("max=%d\n",c);
	return 0;
}
//子任务：求最大值函数
int max(int x,int y)
{
	int z;if (x>y)z=x;
	else z=y;
	return(z);
}
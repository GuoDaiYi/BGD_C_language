#include<stdio.h>
int main()
{
    int mike_score=89;
    int john_score=98;
    int memory=0;
    memory=mike_score;
    mike_score=john_score;
    john_score=memory;
    printf("John Score=%d\n",john_score);
    printf("Mike Score=%d\n",mike_score);
}
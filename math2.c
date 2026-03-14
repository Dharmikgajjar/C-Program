#include <stdio.h>

int main()
{
    int x,y,answer;
    printf("enter your value of x:");
    scanf("%d",&x);
    printf("enter your value of y:");
    scanf("%d",&y);

    answer = (x-y)*(x-y);

    printf("Your Answer:%d\n",answer);
    return 0;
}

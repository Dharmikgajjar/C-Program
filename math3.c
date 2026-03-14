#include <stdio.h>
int main()
{
    int x,y,answer;
    printf("Enter the value of x:");
    scanf("%d",&x);

    printf("Enter the value of y:");
    scanf("%d",&y);

    answer=(x+y)*(x+y)*(x+y);

    printf("Your answer:%d",answer);
    return 0;
}

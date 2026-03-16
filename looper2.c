#include <stdio.h>

int main()
{
    int i=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (;n>0; n=n/10 )
    {
        i++;
    }
    printf("Total number of digit:%d",i );
    return 0;
}

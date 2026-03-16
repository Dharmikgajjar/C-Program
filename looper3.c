#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter the number ");
    scanf("%d",&n);
    j=n%10;

    for (;n>=10; n=n/10)
    {
        
    }
    i=n;
    k=i+j;
    printf("total of first and last digit is :%d",k);
    return 0;
}
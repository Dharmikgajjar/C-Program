#include <stdio.h>

int main()
{
    int num;
    printf("Enter Your number: ");
    scanf("%d",&num);

    
    if (num % 2 !=0)
    {
        printf("your number is Odd number ");
    }
    else{
        printf("your number is Even number ");
    }
   
    return 0;
}

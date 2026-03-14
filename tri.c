#include<stdio.h>

int main ()
{   int Firstangle,Secondangle,Thirdangle;

    printf("Enter your Firstangle :\n");
    scanf("%d", &Firstangle);
    printf("Enter your Secondangle :\n");
    scanf("%d", &Secondangle);

    Thirdangle =180 - (Firstangle + Secondangle);

    printf("Your Thirdangle is :%d",Thirdangle);

    return 0;
}

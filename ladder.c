#include <stdio.h>



int main()
{
    int Number;
    printf("Enter Your Number:");
    scanf("%d", &Number);

if(Number < 0){
    printf("This NUmber is Negative");
}
else if(Number == 0){
    printf("This NUmber is Neutral");
}
else if(Number > 0){
    printf("This NUmber is positive");
}
    return 0;
}


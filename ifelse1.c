#include <stdio.h>
int main()
{
    int first,second,minimum;

    printf("enter your first number:");
    scanf("%d", &first);
    printf("enter your second number:");
    scanf("%d", &second);

    if (first < second){
        printf("minimum number is %d\n",first );

    }
    else{
        printf("minimum number is %d\n",second );
    }
    return 0;
}
 
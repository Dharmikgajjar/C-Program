#include <stdio.h>

 int main(){
    
    int c;
    float f;


    printf("enter the celcius");
    scanf("%d", &c);
    f = (9.0/5.0 * c)+32;
    printf( "your fehreheit is:%f",f);
    

    return 0;

}
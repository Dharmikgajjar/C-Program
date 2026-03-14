#include <stdio.h>

int main()
{   
    int  basicsalary,Hra,Da,Ta,grosssalary;
    printf("Enter your base salary : ");
    scanf("%d", &basicsalary);
    
    Hra = basicsalary * 10/100;
    Da = basicsalary * 5/100;
    Ta = basicsalary * 8/100;
    grosssalary = basicsalary + Hra + Da + Ta;

    printf("your Grosssalary is as per below\n");
    printf("base salary: %d\n",basicsalary);
    printf("Hra : %d \n" ,Hra );
    printf("Da :%d\n", Da);
    printf("Ta :%d\n",Ta );
    printf("grosssalary : %d", grosssalary);

    
    return 0;
}

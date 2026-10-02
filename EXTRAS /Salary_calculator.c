#include<stdio.h>
int main ()
{
    int days ;
    float per , total;
    
    printf("Enter the number of days :");
    scanf("%d" ,&days);
    
    printf("Enter the wage amount per day :");
    scanf("%f" ,&per);
    
    total = (days * per);
    printf("The total salary to be paid is : %.3f\n" ,total);
    return 0;
}

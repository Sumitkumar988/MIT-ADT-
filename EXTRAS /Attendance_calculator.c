#include <stdio.h>
int main ()
{
    int num1 , num2 , num3 ;
    float per;
    
    printf("Enter the number of class attended :");
    scanf("%d", &num1);
    
    printf("Enter Total number of classes conducted :");
    scanf("%d", &num2);
    
    per = ((float)num1/num2)*100;
    
    printf("The attendance percentage is : %.3f\n" ,per);
    return 0;
    
}

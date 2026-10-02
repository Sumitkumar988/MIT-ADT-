#include <stdio.h>
int main()
{
    float num1, num2, num3 , sum;
    float average ;
    
    printf("Enter number 1 :");
    scanf("%f", &num1);
    
    printf("Enter number 2 :");
    scanf("%f", &num2);
    
    printf("Enter number 3 :");
    scanf("%f", &num3);
    
    
  sum = num1 + num2+ num3;
  average = (num1 + num2 + num3)/3;
  
  printf("The sum of the 3 nummbers are : %.4f\n", sum);
  printf("The average  of the 3 nummbers are : %.4f\n", average);
  
    return 0;
}

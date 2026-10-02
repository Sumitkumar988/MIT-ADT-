#include <stdio.h>
int main ()
{
    float sub1 , sub2 , sub3, sub4, sub5, total, average;
    
    printf("ENTER THE MARKS FOR SUBJECT 1: ");
    scanf("%f" ,&sub1);
    
    printf("ENTER THE MARKS FOR SUBJECT 2: ");
    scanf("%f" ,&sub2);
    
    printf("ENTER THE MARKS FOR SUBJECT 3: ");
    scanf("%f" ,&sub3);
    
    printf("ENTER THE MARKS FOR SUBJECT 4: ");
    scanf("%f" ,&sub4);
    
    printf("ENTER THE MARKS FOR SUBJECT 5: ");
    scanf("%f" ,&sub5);
    
    total = sub1 + sub2 + sub3 + sub4 + sub5 ;
    average = total/5;
    
    printf("THE TOTAL MARKS OF THE 5 SUBJECTS ARE :%f\n" ,total);
    printf("THE AVERAGE MARKS OF THE 5 SUBJECTS ARE :%f\n" ,average);
    
    return 0;
    
}

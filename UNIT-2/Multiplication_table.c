#include<stdio.h>
int main ()
{
    int num;
    int num1;
    
    printf("ENTER THE NUMBER FOR THE MULTIPLICATION TABLE:");
    scanf("%d" ,&num);

    for (num1=1; num1<=10; num1++)
    printf("%d*%d=%d\n", num, num1, num*num1);
    
    return 0 ;
}

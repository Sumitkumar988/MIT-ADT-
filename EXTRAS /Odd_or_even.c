#include <stdio.h>
int main ()
{
    int num;
    printf("Enter the number to check odd or even :");
    scanf("%d",&num);
    if(num % 2==0)
    {
        printf("The number entered is even");
    }
    else 
    {
    printf("The number entered is odd ");
    }
return 0;
}

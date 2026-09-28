#include <stdio.h>
int main()
{
int choice;
int a,b;
    printf("MENU DRIVEN CALCULATOR\n");
    printf("\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
    printf("\n");
printf("Enter your choice: ");
scanf("%d",&choice);
    printf("\n");

printf("enter first numbers: ");
scanf("%d", &a);
printf("enter second numbers: ");
scanf("%d",&b);

switch(choice)
{
    case 1:
        printf("result: %d\n", a+b);
        break;
    case 2:
        printf("result: %d\n", a-b);
        break;
    case 3:
        printf("result: %d\n", a*b);
        break;
    case 4:
        printf("result: %d\n", a/b);
        break;
    default:
        printf("invalid choice\n");
}
return 0;
}

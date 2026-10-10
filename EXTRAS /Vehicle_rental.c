#include <stdio.h>
int main ()
{
    int choice , days , fare ;

    printf("VEHICLE RENTAL SYSTEM\n ");
    printf("PRESS 1 FOR SEDAN \n");
printf("PRESS 2 FOR HATCHBACK \n");
    printf("PRESS 3 FOR SUV\n");
    printf("PRESS 4 FOR LUXURY\n");
    printf("Enter your choice :");
    scanf("%d" ,&choice);

    switch (choice)
        {
            case 1:
            printf("YOUR CHOSEN VEHICLE TYPE IS SEDAN\n");
            printf("RENT PER DAY IS 1500/- \n");
                printf("ENTER THE NUMBER OF DAYS FOR RENTAL :");
                scanf("%d" ,&days);
                    fare = days * 1500;
                printf(" YOUR TOTAL FARE = %d",fare);
            break;
            case 2:
            printf("YOUR CHOSEN VEHICLE TYPE IS HATCHBACK\n");
            printf("RENT PER DAY IS 2500/- \n");
            
            printf("ENTER THE NUMBER OF DAYS FOR RENTAL :");
                scanf("%d" ,&days);
                    fare = days * 2500;
                printf(" YOUR TOTAL FARE = %d",fare);
            break;
            case 3:
            printf("YOUR CHOSEN VEHICLE TYPE IS SUV\n");
            printf("RENT PER DAY IS 3150/- \n");
            
            printf("ENTER THE NUMBER OF DAYS FOR RENTAL :");
                scanf("%d" ,&days);
                    fare = days * 3150;
                printf(" YOUR TOTAL FARE = %d",fare);
            break;
            case 4:
            printf("YOUR CHOSEN VEHICLE TYPE IS LUXURY\n");
            printf("RENT PER DAY IS 5000/- \n");
            
            printf("ENTER THE NUMBER OF DAYS FOR RENTAL :");
                scanf("%d" ,&days);
                    fare = days * 5000;
                printf(" YOUR TOTAL FARE = %d",fare);
            break;
            default:
            printf("INVALID CHOICE");
            break;
        }
    return 0;
}

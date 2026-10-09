#include <stdio.h>
int main ()
{
    float  arear, areas, areac, lengthr, breadthr, sides, radiusc, pie;
    int choice ;
    pie = 3.14;

    printf("1. PRESS 1 FOR RECTANGLE\n");
             printf("2. PRESS 2 FOR SQUARE\n");
                      printf("3. PRESS 3 FOR CIRCLE\n");
           
           printf("CHOOSE AN OPTION TO CALCULATE AREA :");
    scanf("%d" ,&choice);

    switch(choice)
        {
    
    case 1:
    printf("ENTER THE LENGTH OF THE RECTANGLE : ");
    scanf("%f" ,&lengthr);
    printf("ENTER THE BREADTH OF THE RECTANGLE : ");
    scanf("%f" ,&breadthr);
    arear= 2*(lengthr + breadthr);
    printf("THE AREA OF THE RECTANGLE IS :%f" ,arear);
    break;

    case 2:
        printf("ENTER THE LENGTH OF THE SIDE OF SQUARE : ");
        scanf("%f" ,&sides);
        areas = sides * sides;
        printf("THE AREA OF THE SQUARE IS :%f" ,areas);
break;
    case 3:

        printf("ENTER THE RADIUS OF THE CIRCLE :");
        scanf("%f" ,&radiusc);
areac =  pie * (radiusc*radiusc);
       printf("THE AREA OF THE CIRCLE IS :%f" ,areac);
        break;
        

        default :
            
            printf("invalid choice");
        }
    return 0;
}

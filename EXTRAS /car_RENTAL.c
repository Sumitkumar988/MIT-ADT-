#include <stdio.h>
int main ()
{
	char name[50] , ins;
	float age, dexp, nod, ctype, ekm, isy, isn;
    int c1, c2, c3 ,c4 ;
	printf(" 1. ENTER THE NAME OF THE CUSTOMER : ");
	scanf("%[^\n]",&name)
        
        ;
// AGE ELIGIBILITY CHECK 
	printf(" 2. ENTER THE AGE OF THE CUSTOMER ;");
	scanf("%f",&age);

	if (age>=18)
	{
		printf(" THE PERSON IS ELIGIBLE FOR RENTAL\n ");
	}
	else
	{
		printf(" THE PERSON IS NOT ELIGIBLE FOR RENTAL\n ");
	}

//  CAR TYPE SELECTION
    printf(" SELECT THE CAR TYPE\n ");
    printf("1.HATCHBACK\n");
     printf("2.SEDAN \n");
     printf("3.SUV \n");
     printf("4.LUXURY \n");
    printf("3. ENTER YOUR CHOICE  :");
    scanf("%d" ,&c1);

    if (c1== 1)
    { printf("YOU HAVE OPTED FOR HATCHBACK ");
    }
    else if (c1==2)
    { printf("YOU HAVE OPTED FOR SEDAN  ");
    }
    else if (c1==3)
    { printf("YOU HAVE OPTED FOR SUV ");
    }
    else if (c1==4)
    { printf("YOU HAVE OPTED FOR LUXURY ");
    }
    else 
    {
        printf("INVALID CHOICE !!!!");
    }

    printf(" 4. ENTER THE NUMBER OF DAYS FOR RENTAL :");
    scanf("%f" ,&nod);

    printf("5. DO YOU WANT INSURANCE\n ");
    printf("(a) YES \n");
    printf("(b) NO \n");
    printf(" ENTER YOUR CHOICE\n :");
    printf("PRESS Y FOR YES\n ")
        printf(" PRESS N FOR NO\n ")

        if(" ")
	return 0 ;
}

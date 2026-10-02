#include <stdio.h>
int main ()
{

	float days, cond, total, per , amt , fine_days ;

	printf(" 1. ENTER THE NUMBER OF DAYS THE STUDENT WAS PRESENT : ");
	scanf("%f",&days);

	printf("2. ENTER THE NUMBER OF DAYS THE CLASSES WERE CONDUCTED : ");
	scanf("%f",&cond);

	per = (days / cond)* 100;
	fine_days =(0.75 * cond)-days;
	amt = fine_days *100;
	 
	
	printf(" 3. THE STUDENTS ATTENDANCE PERCENTAGE IS :  %f \n",per);

	if (per >=60 )
	{
		if (per>=75)

		{
			printf(" 4. THE STUDENT IS ELIGIBLE FOR TAKING THE EXAMINATION  : \n");
		}
		else
		{
		    printf(" 4. THE STUDENT IS SHORT OF %f DAYS FOR ATTENDANCE  :  \n ",fine_days);
			printf(" 5. THE STUDENT HAS TO PAY FINE FOR TAKINNG THE EXAMINATION \n ",per );
			
		    printf("6. THE STUDENT HAS TO PAY AN AMOUNT OF RS. %f AS A FINE :  \n" ,amt);
		}
			
		
	}

		else
		{
		    printf("4.  THE STUDENT IS NOT ELIGIBLE FOR TAKING THE EXAMINATION : %f \n",per );
		    
		}
	
		return 0;
	}

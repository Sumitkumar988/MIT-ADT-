#include <stdio.h>
int main ()
{

	int age ;

	printf("ENTER THE AGE OF THE PERSON :");
	scanf("%d",&age);

	if (age<18)
	{
		if(age<=9)
		{
			printf("THE PERSON FALLS INTO CHILD CATEGORY \n");
		}
		else {
		printf("THE PERSON FALLS INTO TEENAGER CATEGORY \n");
	}}
	else
	{
		printf("THE PERSON FALLS INTO ADULT CATEGORY\n ");
	}
	return 0;
}

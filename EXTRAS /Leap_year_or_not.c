#include <stdio.h>
int main ()
{
	int year;

	printf("ENTER THE YEAR TOU WANT TO CHECK WHETHER LEAP OR NOT : ");
	scanf("%d",&year);

	if (year%4==0)
	{
		printf("THE YEAR IS A LEAP YEAR ");
	} else
	{
		printf("THE YEAR ENTERED IS NOT A LEAP YEAR ");
	}
	return 0;
}

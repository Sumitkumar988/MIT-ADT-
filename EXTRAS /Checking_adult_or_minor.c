#include <stdio.h>
int main ()
{

	int age ;

	printf("ENTER THE AGE OF THE PERSON :");
	scanf("%d",&age);

	if (age>=18)
	{
		printf(" THE PERSON IS AN ADULT ");

	}
	else
	{
		printf("THE PERSON IS A MINOR");
	}
	return 0;
}

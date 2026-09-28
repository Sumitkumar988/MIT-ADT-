#include <stdio.h>
int main ()
{
  // VARIABLE DECLARATION
  
  char studentname[50],fathersname[50];
  float jeemarks, sscmarks , height;
  int studentsage, appnumber;

  // STATEMENTS FOR TAKING INPUTE FROM USER

printf("Enter name of the student :");
scanf("%s[49]", studentname);

printf("Enter Father's name :");
scanf("%s[49]", fathersname);

printf("Enter jee marks : ");
scanf("%f", & jeemarks);

printf("Enter SSC marks :");
scanf("%f", & sscmarks);

printf("Enter students height: ");
scanf("%f", & height);

printf("Enter Students Age :");
scanf("%d", & studentsage);

printf("Enter Application number; ");
scanf("%d", & appnumber);

// NOW WE NEED TO PRINT THE OUPUT FOR THE INPUT TAKEN:

printf("Students Name : %s\n ", studentname);
printf("Fathers Name : %s\n", fathersname);
printf(" Joint entrance exam marks: %.2f\n", jeemarks);
printf(" SSC marks :%.2f\n", sscmarks);
printf("Height of  the student: %.2f\n", height);
printf(" Age of the student :%d\n", studentsage);
printf("Application number: %d\n", appnumber  );

return 0;

}

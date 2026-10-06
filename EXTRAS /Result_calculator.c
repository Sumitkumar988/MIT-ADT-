#include <stdio.h>
int main ()
{
    char name[50] , fname[55];
    float math , english , pl , eee , mfc , total  , per ;
    int roll ;
    printf("ENTER THE NAME OF THE STUDENT : ");
    scanf(" %[^\n]" , name);
    printf("ENTER FATHER'S NAME : ");
    scanf(" %[^\n]" , fname);
    printf("ENTER THE ROLL NUMBER OF THE STUDENT :");
    scanf("%d" ,&roll);
    printf("ENTER THE ROLL NUMBER OF THE STUDENT :");
    scanf("%d" ,&roll);
printf("ENTER MATHEMATICS MARKS :");
    scanf("%f" ,&math);
printf("ENTER ENGLISH MARKS : ");
    scanf("%f" ,&english);
printf("ENTER PROGRAMMING LANGUAGE MARKS :");
    scanf("%f" ,&pl);
printf("ENTER EEE MARKS  :");
    scanf("%f" ,&eee);
printf("ENTER MFC MARKS:");
    scanf("%f" ,&mfc);

    total = math + english + pl + eee + mfc;
    per = total/5;

    printf("THE TOTAL MARKS = %f\n" ,total);
    printf("THE PERCENT = %f\n" ,per);

    return 0;

    


    
    
    
}

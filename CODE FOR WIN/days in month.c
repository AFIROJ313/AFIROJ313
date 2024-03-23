#include<stdio.h>
void main()
{
    int month;
    scanf("%d",&month);

    if(month==1)
        printf("JANUARY: 31 days");

   else if(month==2 )
        printf("FEBRUARY: 28 or 29 days ");

     else if(month== 3)
        printf("March : 31 days ");

     else if(month== 4 )
        printf("April :30 days ");

     else if(month==5)
        printf("May: 31 days ");

     else if(month==6)
        printf("June : 30 days ");

     else if(month==7 )
        printf("July : 31 days");

     else if(month==8 )
        printf("August: 31 days ");

     else if(month==9)
        printf("September: 30 days ");

     else if(month==10 )
        printf("October: 31 days ");

     else if(month==11 )
        printf("November: 30 days ");

     else if(month==12)
        printf("December: 31 days ");

        else
            printf("invalid input ");

}

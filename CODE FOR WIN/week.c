#include<stdio.h>
void main()
{
    int week;
    scanf("%d",&week);

    if(week==1)
    printf("Sunday ");

   else if(week==2)
    printf("Monday");

    else if(week==3)
    printf(" Tuesday");

    else if(week==4)
    printf("Wednesday ");

    else if(week==5)
    printf("Thursday ");

    else if(week==6)
    printf(" Friday");

    else if(week==7)
    printf(" Saturday");

    else
        printf("Invalid input");


}

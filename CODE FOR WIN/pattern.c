#include<stdio.h>
void main()
{

    int i,j,k;
    //upeer
    for(i=1;i<=5;i++)
    {
        //space before star
        for(j=1;j<=5-i;j++)
        {
          printf(" ");
        }
        //first one star*
        printf("*");

        //space after one star*
        for(k=1;k<=2*i-3;k++)
        {
            printf(" ");
        }
        //2nd star*
        if(i!=1)
            printf("*");
           printf("\n");
    }
//lower
    for(i=1;i<=4;i++)
    {
        //space before
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        //one star first
        printf("*");
        //space after one star
        for(k=1;k<=7-2*i;k++)
        {
            printf(" ");
        }
        //2nd star
        if(i!=4)
            printf("*");
        printf("\n");
    }
}

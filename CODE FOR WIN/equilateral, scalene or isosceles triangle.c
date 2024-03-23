#include<stdio.h>
void main()
{
    int side1,side2,side3;
    printf("Input Side1:  ");
    scanf("%d",&side1);

    printf("Input Side2:  ");
    scanf("%d",&side2);

    printf("Input Side3:  ");
    scanf("%d",&side3);

    if(side1==side2 && side2==side3)
    {
        printf("The Triangle is equilateral ");
    }

   else if(side1==side2 || side2==side3|| side3==side1)
   {
       printf("This Triangle is isosceles");
   }
   else
   {
       printf("This Triangle is scelene");
   }

}

#include<stdio.h>
void main()
{
    int side1,side2,side3;
    printf("Enter side 1 then side2 then side3 :");
    scanf("%d %d %d",&side1,&side2,&side3);

    if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
        printf("This triangle is valid");
    else
    printf("This Triangle is not valid");



}

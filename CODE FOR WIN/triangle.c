#include<stdio.h>
void main()
{
 int t1,t2,t3,sum;
scanf("%d %d %d",&t1,&t2,&t3);

 sum=t1+t2+t3;
 if(sum==180 && t1>0 && t2>0 && t3>0)
 {

     printf("The Triangle is Valid");
 }else
 printf("Triangle is not valid");

}

#include<stdio.h>

int main(){

 double X,Y, results;

 printf("Enter Any Two number: ");
 scanf("%lf %lf",&X,&Y);

 results=X+Y;
 printf("the addition is :%.2lf\n",results);

 results=X-Y;
 printf("the subtraction is :%.2lf\n",results);

 results=X*Y;
 printf("the multiplication is :%.2lf\n",results);

 results=X/Y;
 printf("the division is :%.2lf\n",results);




}

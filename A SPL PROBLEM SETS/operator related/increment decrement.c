#include<stdio.h>
int main(){
 int X;
 printf("Enter any number: ");
 scanf("%d",&X);
 int y=X++;
 printf("X++=%d\n",y);
 int y1=++X;
 printf("++X=%d\n",y1);
 printf("X--=%d\n",X--);
 printf("--X=%d\n",--X);


}

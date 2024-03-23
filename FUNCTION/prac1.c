#include<stdio.h>
void max(int ,int ,int);
void main()
{
  max(10,1500,60);
  max(10000 ,1500,60);
  max(10,150,60);


}

void max(int x,int y,int z)
{
   int max;
   if(x>y && x>z)
   {
       max=x;
   }
    else if(y>x&& y>z)
    {
        max=y;
    }
    else
    {
        max=z;
    }

   printf("The max of %d %d %d is %d\n",x,y,z,max);


}

#include<stdio.h>
void GCD(int,int);
void main()
{
   GCD(3,17);
   GCD(2,6);
   GCD(3,19);
   GCD(5,20);
   GCD(9,40);

}

void GCD(int x,int y)
{
    int min,max,temp;

    if(x>y)
    {
        max=x, min=y;
    }
    else
    {
        max=y, min=x;
    }
    while(max%min!=0)
    {
        temp=min;
        min=max%min;
        max=temp;
    }
    printf("The GCD of %d %d is :%d\n",x,y,min);
}

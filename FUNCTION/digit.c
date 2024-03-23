#include<stdio.h>
int digit(int);
int main()
{
    int x,y;
    x=178187837;
    y=digit(x);
    printf("%d")


}
int digit(int num)
{
    int r,c=0;
    do{
        r=num%10;
        num=num/10;
        c++;
        while(num>0);
        return c;

        }
}

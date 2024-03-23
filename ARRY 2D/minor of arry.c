#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j;
    for(i=0;j<3;j++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }


    }
    for(i=0;j<3;j++)
    {
        for(j=0;j<3;j++)
            if(i==j)
        {
            printf("%d",a[i][j]);
        }


    }




}

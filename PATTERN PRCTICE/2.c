#include<stdio.h>
int main()
{
    int array[3][3],i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d\n",&array[i][j]);
        }
    }
    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
        {
            printf("%d",array[j][i]);
        }


    }
    return 0;
}

#include<stdio.h>
void main()
{
    int mat[4][3];
    int i,j;

    //input

    for(i=0; i<=3; i++)
    {
       for(j=0; j<=2; j++)
       {
           scanf("%d",&mat[i][j]);
       }
    }

   //output

    for(i=0; i<=3; i++)
    {
       for(j=0; j<=2; j++)
       {
           printf("%d ",mat[i][j]);
       }
       printf("\n");
    }



}

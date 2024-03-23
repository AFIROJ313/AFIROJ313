#include<stdio.h>
void main()
{
    int i,j;
    int mat1[3][3],mat2[3][3],mat3[3][3],sum[3][3];

    //mat 1 input
    printf("MATRIX 1 :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    //mat2 input
    printf("MATRIX 2 :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    //mat3 input
    printf("MATRIX 3 :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&mat3[i][j]);
        }
    }

   //sum off all matrix
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j]+mat3[i][j];
        }
    }

     //output of sum
     printf(" SUM OF ALL THREE MATRIX  :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


}


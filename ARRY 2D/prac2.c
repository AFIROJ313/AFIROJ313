#include<stdio.h>
void main()
{
    int m,n,i,j;
    printf("n :");
    scanf("%d",&n);
    printf("m :");
    scanf("%d",&m);

    int mat[100][100];
    //input
    for(i=0; i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

   //output
   for(j=0;j<=m-1;j++)
    {
        for(i=0; i<=n-1;i++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }


}

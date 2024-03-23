#include<stdio.h>
void main()
{
    int i,j,n,p=2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(j=p;j<=i;j++)
        {
            printf("%d",j);
        }

          printf("\n");

    }







}

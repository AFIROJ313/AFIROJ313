#include <stdio.h>

void main()

   {
     int i,j,a[100][100],sum=0,n;


	 printf("Enter a odd number : ");
     scanf("%d", &n);

     int half=(n/2);

       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           scanf("%d",&a[i][j]);
            }
        }

       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
			   if(i%2!=0)
                    sum +=a[i][j];
                else if(i%2==0 ){
                    if(j%2!=0)
                        sum +=a[i][j];
                }
                else
                    continue;
            }
        }

        printf("Sum = %d",sum);
    }

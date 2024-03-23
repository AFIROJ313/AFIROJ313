#include<stdio.h>

int main()
{
	float number, sum=0;
	int i, n;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%f", &number);
		sum = sum + number;
	}

	printf("AVG of %d inputs: %f", n, sum/n);
	return 0;
}



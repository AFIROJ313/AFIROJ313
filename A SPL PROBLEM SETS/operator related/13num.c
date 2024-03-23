#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    scanf("%f",&x);
    x=x*(M_PI/180.0);
    printf("%f",2*pow(cos(x),2)-sqrt(3)*sin(x)+sin(x/2)+log(x/2));
    return 0;
}

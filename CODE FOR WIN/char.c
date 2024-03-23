#include<stdio.h>

void main()
{
    char ch;

    printf("Enter any character here: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        printf("This is CHARACTER ");
    else
    printf("This is not CHARACTER");
}

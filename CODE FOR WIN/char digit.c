#include<stdio.h>
void main()
{
    char ch;

    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        printf("This is Character");
    else if(ch>=0 && ch<=9)
    printf("This is Digit");
    else
    printf("Special character");


}

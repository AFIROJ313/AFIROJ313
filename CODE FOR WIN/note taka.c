#include<stdio.h>
void main()
{
    int amount,note1000,note500,note100,note50,note20,note10,note5,note2,note1;
    /*initialization all note to 0*/

    note1000=note500=note100=note50=note20=note10=note5=note2=note1=0;
    scanf("%d",&amount);

    if(amount>=1000)
    {
        note1000=amount/1000;
        amount-=note1000*1000;
    }
    if(amount>=500)
    {
        note500=amount/500;
        amount-=note500*500;
    }


    if(amount>=100)
    {
        note100=amount/100;
        amount-=note100*100;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount-=note50*50;
    }
    if(amount>=20)
    {
        note20=amount/20;
        amount-=note20*20;
    }
    if(amount>=note10)
    {
        note10=amount/10;
        amount-=note10*10;
    }
    if(amount>=5)
    {
        note5=amount/5;
        amount-=note5*5;
    }
    if(amount>=2)
    {
        note2=amount/2;
        amount-=note2*2;
    }
    if(amount>=1)
    {
        note1=amount;
    }

  /*Print required notes */
    printf("Total number of notes = \n");
    printf("1000 = %d\n", note1000);
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);


}

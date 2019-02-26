#include<stdio.h>
#include<cs50.h>
int main (void)
{
    long long cardnumber = 0;
    {
        printf("tell me your card number?");
        cardnumber = get_long_long(" ");
    }
    while (cardnumber < 0);
    int count = 0;
    long long digits = cardnumber;
    while (digits > 0)
    {
        digits = digits/10;
        count++;
    }
    if ((count==13) && (count==15) && (count==16))
    {
        printf("is not valid\n");
    }
    int number[count];
    for (int i=0; i<count; i++)
    {
        number[i]= cardnumber%10;
        cardnumber= cardnumber/10;
    }
    int initialnumber[count];
    for(int i=1; i<count; i++)
    {
        initialnumber [i]=number[i];
    }
    for (int i=1; i<count; i+=2)
    {
        number[i]=number[i]*2;
    }
    int m=0;
    int b;
    if(count==13)
    {
        for (int i=0; i<count; i++)
        {
            b=(number[i]%10)+(number[i]/10%10);
            m=m+b;
        }
        if(initialnumber[12]==4 && m % 10==0)
        {
            printf("visa\n");
        }
        else
        {
            printf("is not valid\n");
        }
    }
    if (count == 15)
    {
        for(int i=0; i<count; i++)
        {
         b=(number[i]% 10)+(number[i]/10 % 10);
         m=m + b;
        }
        if(initialnumber[14]==3 && m % 10==0&& (initialnumber[14]==4)|| (initialnumber[13]==7))
        {
            printf("mina\n");
        }
        else
        {
            printf("is not valid\n");
        }
    }
    if (count==16)
    {
        for(int i=0; i<count; i++)
        {
            b=(number[i]% 10) + (number[i]/10%10)
            m=m+b;
        }
        if (initialnumber[15]==4 && m %10==0)
        {
            printf("visa\n");
        }
        else if (initialnumber[15]==5 && m%10==0 && (initialnumber[14]==1|| initialnumber[14]==2|| initialnumber[14]==3|| initial number[14]==4||or))
        {
            printf("master card\n");
        }
        else
        {
            printf("is not valid\n");
        }
    }
    return 0;
}
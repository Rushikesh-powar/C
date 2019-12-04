#include <stdio.h>
#include <stdlib.h>

int temp();
int len();
int cln();

int main()
{
    int a;
    printf("Choose an option:\n1.Temperature Converter \n2.Length Converter \n3.Convert Day into years\nANS=");
    scanf("%d",&a);
    printf("\n----------------------------------------\n");

    switch(a)
    {
        case 1:temp();
        break;

        case 2:len();
        break;

        case 3:cln();
        break;

        default:printf("The selected option is invalid!");
        return 0;
    }
}
int temp()
{
    int f,c;
    int ch;
    printf("Would you like to convert:\nPress 1=Celsius TO Fahrenheit \n       OR\nPress 2=Fahrenheit TO Celsius\nANS=");
    scanf(" %d",&ch);
    printf("\n----------------------------------------\n");

    if(ch==1)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%d",&c);

        f=(c * 9/5)+32;
        printf("The temperature in Fahrenheit is: %d\n",f);
    }
    else if(ch==2)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%d",&f);

        c=(f-32)*5/9;
        printf("The temperature in Celsius is: %d\n",c);
    }
    else
        printf("The entered option is invalid!");

    return 0;
}
int len()
{
    int m,cm,ch;

    printf("Would you like to convert:\nPress 1=Meter TO Centimeter\n        OR\nPress 2=Centimeter TO Meter\nANS=");
    scanf("%d",&ch);
    printf("\n----------------------------------------\n");

    if(ch==1)
    {
        printf("Enter Length in Meter's: ");
        scanf("%d",&m);

        cm=m*100;
        printf("The Length in Centimeter's is: %d\n",cm);
    }
    else if(ch==2)
    {
        printf("Enter Length in Centimeter's: ");
        scanf("%d",&cm);

        m=cm/100;
        printf("The Length in Meter's is: %d\n",m);
    }
    else
        printf("The selected option is invalid!");

    return 0;
}
int cln()
{
    int d,y,w,ch;
    printf("Would you like to convert:\nPress 1=Day's into Year's \n      OR\nPress 2=Week's int Day's");
    scanf("%d",&ch);
    printf("\n----------------------------------------\n");

    if(ch==1)
    {
        printf("Enter the no Day's passed: ");
        scanf("%d",&d);

        y=d/365;
        printf("The year's passed are: %d\n",y);
    }
    else if(ch==2)
    {
        printf("Enter no of Week's passed: ");
        scanf("%d",&w);

        d=w*7;
        printf("The no of Day's Passed  are: %d\n",d);
    }
    return 0;
}

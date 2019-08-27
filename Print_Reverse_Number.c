#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,number,count=0,rem;

    printf("Enter an Integer: ");
    scanf("%d",&num);

    number=num;
    while(num>0)
    {
        rem=num%10;
        num=(num-rem)/10;
        count++;
    }
    printf("There are %d digits in the number %d",count,number);
    return 0;
}


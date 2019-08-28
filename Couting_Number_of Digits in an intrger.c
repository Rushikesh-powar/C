#include <stdio.h>
#include <stdlib.h>

int Rushi()
{
    int num,number,count,rem;

    printf("Enter an Integer: ");
    scanf("%d",&num);

    number=num;
    while(num>0)
    {
        rem=num%10;
        number=(num-rem)/10;
        count++;
    }
    printf("There are %d digits in the number %d",count,number);
    return 0;
}

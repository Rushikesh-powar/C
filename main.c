#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,*p,*q[10];
    char b[10];
   int c=5/4*2/2+1;

    printf("Enter the value: ");
    scanf("%d",&a);

    printf("Enter a alphabet: ");
    for(i=0;i<10;i++)
     {
         scanf(" %s",&b[i]);
         q[i]=&b[i];
     }
    p=&a;

    printf("\n The address of the value is:%p ",p);

    for(i=0;i<10;i++)
     {
         printf("\n The address of the Alphabet is:%p ",q[i]);
         printf("The value at the address is: %c",*q[i]);
     }
    return 0;
}

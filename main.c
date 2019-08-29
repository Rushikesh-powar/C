#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z=2,i,r,q;

   printf("How many times would you like to run the program? :");
   scanf("%d",&x);

    for(i=0 ; i<x ; i++)
   {

    printf("\n Enter an Number: ");
    scanf("%d",&y);

    if(y==0)
    {
        printf("%d is not a prime number",y);
    }
    else
    {   r=x/z;
        q=x/x;

        if(r==0)
        {
           if(q==1)
            {
                printf("\n The entered number %d is a prime number",y);
            }
            else
            {
                 printf("\n The entered number %d is a prime number",y);
            }
       }
       else
       {
           printf("\n The entered number %d is not  prime number!",y);
       }
    }
  }
}

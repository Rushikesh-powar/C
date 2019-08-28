#include <stdio.h>
#include <stdlib.h>

int recuse();
int main()
{
  int i,n;
  printf("How many times would you like to run the program? :");
  scanf("%d",&n);

  for(i=0;i<n;i++)
   recuse();
}

int recuse()
{
    int base,power,str=1,i;

    printf("\nEnter the Base: \n base= ");
    scanf("%d",&base);
    printf("\nEnter The power: \n power= ");
    scanf("%d",&power);

    if(power==0)
    {
        printf("The ans is : 1\n");
    }
    else
    {
        for(i=1;i<=power;i++)
           {
               str=str*base;
           }
            printf("The ans is: %d \n",str);

    }
    return str;
}


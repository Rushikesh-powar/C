#include <stdio.h>
#include <stdlib.h>
int prime();

int main()
{
    prime();
}
int prime()
{
    int a,b,j,z;

       printf("Enter the 1st interval: ");
       scanf("%d",&a);
       printf("Enter the 2nd interval: ");
       scanf("%d",&b);

      if(a<b)
      {

       for(;a<b;a++)
        {

            for(j=2;j<a;j++)
            {
                if(a%j!=0)
                 continue;
                else
                 break;
       }
       if(j==a)
        printf("%d ",a);
   }
} 
    else
   {
        for(;a>b;a--)
        {

            for(j=2;j<a;j++)
            {
                if(a%j!=0)
                    continue;
                else
                    break;
            }
            if(j==a)
             printf("%d ",a);
        }
  }

  printf("\n Would you like to continue? \n yes='1'   no='0' \n ans=");
  scanf("%d",&z);
  if(z==1)
    prime();

  else
   return 0;
}


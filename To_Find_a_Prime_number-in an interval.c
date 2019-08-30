#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,j;

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
} else
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
}

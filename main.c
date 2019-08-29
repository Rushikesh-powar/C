#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   char ans;

   printf("Enter the 1st numbers: ");
   scanf("%d",&a);

   printf("Enter the 2nd numbers: ");
   scanf("%d",&b);

   c=a+b;
   printf("\nThe answer is %d \n",c);

   printf("\nWould you like to continue? :\n  y='yes'    n='no' \nans=");
   scanf(" %s",&ans);

   if(ans=='y')
   {
       main();
   }
   else
   {
       return 0;
   }
}

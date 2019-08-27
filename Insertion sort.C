/*Rushikesh Powar
this program is to insertion */
#include<stdio.h>
#include<conio.h>

int sort();
int main()
 {
   clrscr();
   sort();

   getch();
   return 0;
 }

int sort()
 {
  int  i,arr[10],n,d,s;

	printf("Enter how much the num be sorted: \n");
	scanf("%d",&n);

	printf("Enter the array values: ");
	 for(i=0;i<n;i++)
	  {
	   scanf("%d",&arr[i]);
	  }

	 for(i=0;i<n-1;i++)
	  {
	    for(d=0;d<n-i-1;d++)
	     {
	       if(arr[d]>arr[d+1])
		 {
		   s=arr[d];
		   arr[d]=arr[d+1];
		   arr[d+1]=s;

		 }
	     }
	  }
	  printf("The list is as follows: ");

	  for(i=0;i<n;i++)
	   printf("%d \n",arr[i]);

	   printf("The number of pass are: %d \n",n-1);


   return arr[i];
 }



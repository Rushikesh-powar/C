#include<stdio.h>


int gcd(int,int);

int main()
{

  int a,b;

  printf("Enter two Number's to Find GCD: ");

  scanf("%d %d",&a,&b);

  printf("The GCD of %d and %d is: %d\n",a,b,gcd(a,b));


  return 0;

}

int gcd(int x,int y)

{
  int i,j;

  if(x>y)

  {

      for(i=1; i<=x;i++)

      {

 
       if(y%i==x%i)
 
        {

          j=i;

	  printf(" %d ");

	  return j;

        }
  
  }


 }

 if(y>x)

 {
 
 for(i=1; i<=y;i++)

  {


      if(y%i==x%i)
 
        {

          j=i;

	  printf(" %d ");

	  return j;
		
        }
 
  }

 }

}

#include<stdio.h>
int fibo(int n);
int main()
{
  int a;
  
  printf("Enter a Number: );
  scanf("%d",&a);
  printf(" %d ",fibo(a));

return 0;
}
int fibo(int n)
{
    int i,a=0,b=1,c;
    if(n<1)
       return 0;
    for(i=1 ; i<n ; i++)
    {
        printf("%d",b);
        c=a+b;
        a=b;
        b=c;
    }

      return b;
}
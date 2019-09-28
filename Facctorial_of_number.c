#include<stdio.h>
int factorial(int n);
int main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  printf("%d",factorial(a));
  return 0;
}
int factorial(int n)
{
    int facto;
    if(n==0 || n==1)
        return (1);

    else
       facto=n*factorial(n-1);

    return (facto);
}
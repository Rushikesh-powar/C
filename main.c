#include <stdio.h>
#include <stdlib.h>
int add();
int subs();
int multi();
float division();
int main()
{
   int rp;
    int c=5*8/2*7+1;
    printf("%d\n\n",c);

   printf("choose operation:- \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n");

   printf("Enter the operation to perform: ");
   scanf("%d",&rp);

   switch(rp)
   {
       case 1:printf("The addition is= %d",add());
       break;

       case 2:printf("The subtraction is= %d",subs());
       break;

       case 3:printf("The multiplication is= %d",multi());
       break;

       case 4:printf("The Division is= %f",division());
       break;

       default:printf("The selected operation is not valid! ");
   }
    return 0;
}

int add()
{
    int x,y,sum,*p1,*p2;

    printf("Enter the first value: ");
    scanf("%d",&x);

    printf("Enter the second value: ");
    scanf("%d",&y);

    p1=&x;
    p2=&y;

    sum=*p1 + *p2;

    printf("The address assigned are \n a= %p \n b= %p \n",p1,p2);

    return sum;
}

int subs()
{
    int sub,a,b,*p3,*p4;

    printf("Enter the first value: ");
    scanf("%d",&a);

    printf("enter the second value: ");
    scanf("%d",&b);

    p3=&a;
    p4=&b;

    sub=*p3 - *p4;

    printf("The address assigned are \n a= %p \n b= %p \n",p3,p4);

    return sub;
}

int multi()
{
    int x,y,mul,*p1,*p2;

    printf("Enter the first value: ");
    scanf("%d",&x);

    printf("Enter the second value: ");
    scanf("%d",&y);

    p1=&x;
    p2=&y;

    mul=*p1 * *p2;

     printf("The address assigned are \n a= %p \n b= %p \n",p1,p2);

    return mul;
}

float division()
{
    float x,y,div,*p1,*p2;

    printf("Enter the first value: ");
    scanf("%f",&x);

    printf("Enter the second value: ");
    scanf("%f",&y);

    p1=&x;
    p2=&y;

    div=*p1 / *p2;

     printf("The address assigned are \n a= %p \n b= %p \n",p1,p2);

    return div;
}

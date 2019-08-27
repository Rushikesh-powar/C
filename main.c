#include <stdio.h>
#include <stdlib.h>
char upp();
char low();

int main()
{
  int x;

  printf("Choose an category:\n 1.Upper case \n 2.Lower case\n 3.Exit \n if uppercase=press 1\n    Lower case=press 2 \n    Exit=3 \n Ans=");
  scanf("%d",&x);
  if(x==1)
  {
      printf("\n------>\n",upp());
  }
  else if(x==2)
  {
      printf("\n------>\n",low());
  }else
  {
      exit(0);
  }

}
char upp()
{
    char A;
    printf("The Upper case Alphabets are:---> ");

    for(A='A';A<='Z';A++)
    {
        printf(" %c \t",A);
    }
    return A;
}
char low()
{
    char B;
    printf("The lower case alphabet are:---->\n");
     for(B='a';B<='z';B++)
    {
        printf(" %c\t",B);
    }
    return B;
}

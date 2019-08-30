#include <stdio.h>
#include <stdlib.h>

struct node1
{
  char name[10];
  int class1;
  int Rollno;
};
int main()
{

    struct node1 student;
    printf("Enter the student name,class, roll no: ");
    scanf(" %s %d %d",&student.name[0],&student.class1,&student.Rollno);

    printf("The information has been stored as: \nname   = %s  \nclass  = %d \nRoll no= %d",student.name,student.class1,student.Rollno);

}

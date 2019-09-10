#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct data
{
    char nam[10];
    char DOB[10];
    char bld[10];
    char cls[10];

};
int main()
{
   struct data student[MAX];
   char sw;

   int i,j,k;
   printf("Enter the number students data to be stored: ");
   scanf("%d",&i);
   if(i>MAX)
    printf("The entered Number is Too big to store DATA!");

   if(i<MAX)
   {
       for(j=0;j<i;j++)
        {
           printf("Enter the student Name: ");
           scanf(" %s",&student[j].nam);

           printf("Enter the student DOB: ");
           scanf(" %s",&student[j].DOB);

           printf("Enter the student Blood group: ");
           scanf(" %s",&student[j].bld);

           printf("Enter the student Class: ");
           scanf(" %s",&student[j].cls);
        }
        printf("Enter the student data to access: ");
        scanf("%d",&sw);

        switch(sw)
        {
            case 1:  printf("\nThe student info is stored as follows:\n"
             " Name= %s \n DOB= %s \n Blood Group= %s \n Class= %s",student[0].nam,student[0].DOB,student[0].bld,student[0].cls);
             break;

             case 2:  printf("\nThe student info is stored as follows:\n"
             " Name= %s \n DOB= %s \n Blood Group= %s \n Class= %s",student[1].nam,student[1].DOB,student[1].bld,student[1].cls);
             break;

            case 3: printf("\nThe student info is stored as follows:\n"
             " Name= %s \n DOB= %s \n Blood Group= %s \n Class= %s",student[2].nam,student[2].DOB,student[2].bld,student[2].cls);
             break;

            case 4: printf("\nThe student info is stored as follows:\n"
             " Name= %s \n DOB= %s \n Blood Group= %s \n Class= %s",student[3].nam,student[3].DOB,student[3].bld,student[3].cls);
            break;

            case 5: printf("\nThe student info is stored as follows:\n"
             " Name= %s \n DOB= %s \n Blood Group= %s \n Class= %s",student[4].nam,student[4].DOB,student[4].bld,student[4].cls);
            break;

            default: printf("The option is not valid");
        }
   }

}

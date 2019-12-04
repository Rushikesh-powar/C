#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data
{
    char name[20];
    char clas[10];
    int rollno;
};

int main()
{
    struct data std;
    FILE *fptr;

    fptr=fopen("G:\\C_program.txt","w");

    if(fptr == '\0')
    {
        printf("\nError!");
        exit(1);
    }
    printf("Enter The Student Data: ");
    scanf(" %s %s %d",&std.name,&std.clas,&std.rollno);

    fprintf(fptr," %s\n",std.name);
    fprintf(fptr," %s\n",std.clas);
    fprintf(fptr," %d\n",std.rollno);

    fclose(fptr);

    return 0;
}

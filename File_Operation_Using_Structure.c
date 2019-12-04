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

    fptr=fopen("G:\\C_program.txt","w");    ////you must create an .txt file before runnig this programm at that location in c drive.

    if(fptr == '\0')
    {
        printf("\nError!");
        exit(1);
    }
    printf("Enter The Student Data: ");
    scanf(" %s %s %d",&std.name,&std.clas,&std.rollno);

    fprintf(fptr," %s\n",std.name);             ////line 27 to line 29 will print the user defined data from the input.
    fprintf(fptr," %s\n",std.clas);
    fprintf(fptr," %d\n",std.rollno);

    fclose(fptr);

    return 0;
}

#include<stdio.h>
#include<conio.h>
#define Maxstk 5

int top=-1;
int arr[Maxstk];

void push();
void pop();
void display();

int main()
{
    int choice1,choice2;
    int i;

    printf("How many times would you like to run the program(<10): ");
    scanf("%d",&choice1);

    for(i=0 ; i<choice1 ; i++)
    {
        printf("\nWhat would you like to perform:\n1:PUSH. \n2:POP \n3:Display \nChoice: ");
        scanf("%d",&choice2);

        if(choice2==1)
            push();

        else if(choice2==2)
            pop();

        else if(choice2==3)
            display();

        else
            printf("The entered Choice is invalid!");
    }

    return 0;
}

void push()
{
    int i;
    int item;

    do
    {
        if(top==Maxstk)
        {
            printf("\nstack overflow cannot push item's !\n");
            break;
        }
        else
        {
            printf("\nEnter the item to pushed in the array: ");
            scanf("%d",&item);

            top++;
            arr[top]=item;
            printf("\nItem %d is pushed at position %d in the stack.",item,top);

        }
        printf("\nPress 1 to Continue: ");
        scanf("%d",&i);
    }while(i==1);
}

void pop()
{
    int i;
    int item;
    do
    {
        if(top<0)
        {
            printf("\nStack underflow cannot pop item!");
            break;
        }
        else
        {
            item=arr[top];
            printf("\nItem %d has been popped from %d position.",arr[top],top);
            top--;
        }
        printf("\nPress 1 to Continue: ");
        scanf("%d",&i);
     }while(i==1);
}
void display()
{
    printf("\nThe Stack elements are: \n");
    for(int i=0 ; i<=top ; i++)
        printf("%d\t",arr[i]);
}


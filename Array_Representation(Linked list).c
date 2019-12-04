/*This is an singly linked list program*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *insert(struct node *p,int n)
{
    struct node *temp;

    if(p=='\0')
    {
        p=(struct node *)malloc(sizeof(struct node));

        if(p=='\0')
        {
            printf("Error \n");
            exit(0);
        }
        p->data = n;
        p->link = p;
    }
    else
    {
        temp = p;

        while(temp->link != p)
            temp = temp->link;

         temp-> link = (struct node*)malloc(sizeof(struct node));

         if(temp->link == '\0')
         {
             printf("Error \n");
             exit(0);
         }
         temp = temp->link;
         temp->data = n;
         temp->link = p;
    }
    return (p);
};
void main()
{
    int n;
    int x;

    struct node *start = '\0';
    printf("Enter the node to be created: ");
    scanf("%d",&n);

    while(n-->0)
    {
        printf("Enter the node Data: \n");
        scanf("%d",&x);
        start = insert(start,x);
    }
    printf("The list has been created! \n");
    printList(start);
}
void printList(struct node *p)
{
    struct node *temp;
    temp = p;

    printf("The Data values in the list are: \n");
    if(p != '\0')
    {
        do{
            printf("%d \t",temp->data);
            temp = temp->link;
        }while(temp != p);
    }
    else
        printf("The List is empty \n");
}

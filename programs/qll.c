#include<stdio.h>

struct node{
    char name[100];
    char usn[20];
    int m;
    struct node * next;
};
typedef struct node NODE;
NODE * first = NULL;

void insert_end()
{
    NODE *new , *temp;
    new = malloc(sizeof(NODE));
    printf("\nEnter Student information :\n");
    printf("\nEnter Student name :");
    scanf("%s",new->name);
    printf("\nEnter Student usn :");
    scanf("%s",new->usn);
    printf("\nEnter Student marks :");
    scanf("%d",&new->m);

    new -> next = NULL;

    if(first == NULL)
    {
        first = new;
        return;
    }
    temp = first;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
    printf("\nStudent %s information has been inserted\n",new->name);
}

void delete_front()
{
    if(first == NULL)
    {
        printf("\nQueue Underflow\n");
        return;
    }
    NODE *temp;
    temp = first;
    printf("\n%s information is deleted\n",temp->name);
    first = first -> next;
    free(temp);
}

void display()
{
    NODE *temp;
    if(first == NULL)
    {
        printf("\nQueue empty\n");
        return;
    }
    temp = first;
    printf("\nStudent information is : \n");
    printf("Name\tUSN\tMarks\n");
    while(temp != NULL)
    {
        printf("%s\t%s\t%d\n",temp->name,temp->usn,temp->m);
        temp = temp -> next;
    }
    printf("\n");
}

int main()
{
    while(1)
    {
        int ch;
        printf("\n*******MENU*******");
        printf("\n1.Inqueue Operation");
        printf("\n2.Dequeue Operation");
        printf("\n3.Display Function");
        printf("\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insert_end();
                    break;
            case 2 : delete_front();
                    break;
            case 3 : display();
                    break;
            case 4 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    
    }
}   
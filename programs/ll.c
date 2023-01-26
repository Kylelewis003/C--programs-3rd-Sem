#include<stdio.h>

struct node{
    int info;
    struct node * next;
};
typedef struct node NODE;
NODE * first = NULL;

void insert_front()
{
    int data;
    NODE *new;
    new = malloc(sizeof(NODE));
    printf("\nEnter data : ");
    scanf("%d",&data);
    new -> info = data;
    new -> next  = first;
    first = new;
}

void insert_end()
{
    int data;
    NODE *new , *temp;
    new = malloc(sizeof(NODE));
    printf("\nEnter data :");
    scanf("%d",&data);
    new -> info = data;
    new -> next  = NULL;

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
}

void delete_front()
{
    if(first == NULL)
    {
        printf("\nList Empty\n");
        return;
    }

    NODE *temp;

    temp = first;
    printf("\n%d is deleted\n",temp->info);
    first = first -> next;
    free(temp);
}

void display()
{
    NODE *temp;
    if(first == NULL)
    {
        printf("\nList empty\n");
        return;
    }
    temp = first;
    while(temp != NULL)
    {
        printf("%d ",temp->info);
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
        printf("\n1.Insert Front Function");
        printf("\n2.Insert End Function");
        printf("\n3.Delete Front Function");
        printf("\n4.Display Function");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insert_front();
                    break;
            case 2 : insert_end();
                    break;
            case 3 : delete_front();
                    break;
            case 4 : display();
                    break;
            case 5 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    
    }
}
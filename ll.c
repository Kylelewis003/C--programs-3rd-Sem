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
        printf("\n2.Delete Front Function");
        printf("\n3.Display Function");
        printf("\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insert_front();
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
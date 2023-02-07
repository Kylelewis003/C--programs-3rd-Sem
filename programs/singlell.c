#include<stdio.h>
#include<stdlib.h>

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
    printf("\nElement %d has been inserted into list\n",data);
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
    printf("\nElement %d has been inserted into list\n",data);

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
void delete_end()
{
    NODE *temp , *prev;
    if(first == NULL)
    {
        printf("\nList Empty\n");
        return;
    }
    temp = first;
    while(temp->next!=NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    printf("\n%d is deleted\n",temp->info);
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
    printf("\nList Contents are : \n");
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
        printf("\nSINGLE LINKED LIST OPERATIONS");
        printf("\n1.Insert Front Function");
        printf("\n2.Insert End Function");
        printf("\n3.Delete Front Function");
        printf("\n4.Delete End Function");
        printf("\n5.Display Function");
        printf("\n6.Exit");
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
            case 4 : delete_end();
                    break;
            case 5 : display();
                    break;
            case 6 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    
    }
}
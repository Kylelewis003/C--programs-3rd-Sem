#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node * next;
};
typedef struct node NODE;
NODE * first = NULL;

int getcurrsize()
{
    int size = 0;
    NODE * temp = first;
    while(temp!=NULL)
    {
        temp = temp->next;
        size++;
    }
    return size;
}

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

void pos_insert()
{
    int data,pos;
    NODE *new , *temp;
    new = malloc(sizeof(NODE));
    printf("\nEnter data : ");
    scanf("%d",&data);
    new->info = data;
    new->next = NULL;

    printf("\nEnter position : ");
    scanf("%d",&pos);

    if(pos<0||pos>getcurrsize())
    {
        printf("\nInvalid positon\n");
        return;
    }    
    else if(pos == 0)
    {
        new->next = first;
        first = new;
    }
    else
    {
        temp = first;
        while(--pos)
        {
            temp = temp->next;
        }
        new->next = temp->next;
        temp->next = new;
    }
    printf("\nElement %d has been inserted into list\n",data);
}

void pos_delete()
{
    int pos;
    NODE *temp = first , *prev;
    printf("\nEnter position : ");
    scanf("%d",&pos);
    if(first == NULL)
    {
        printf("List Empty");
        return;
    }
    if(pos<0||pos>getcurrsize())
    {
        printf("\nInvalid position\n");
        return;
    }
    else if(pos == 0)
    {
        first = first->next;
        printf("\n%d is deleted\n",temp->info);
        free(temp);
    }
    else
    {
        while(pos--)
        {
            prev = temp;    
            temp = temp->next;
        }
        prev->next = temp->next;
        printf("\n%d is deleted\n",temp->info);
        free(temp);
    }
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
        printf("\n2.Positional Insertion Function");
        printf("\n3.Delete Front Function");
        printf("\n4.Positional Deletion Function");
        printf("\n5.Display Function");
        printf("\n6.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insert_front();
                    break;
            case 2 : pos_insert();
                    break;
            case 3 : delete_front();
                    break;
            case 4 : pos_delete();
                    break;
            case 5: display();
                    break;
            case 6 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    
    }
}
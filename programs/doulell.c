#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *llink;
    struct node *rlink;
};
typedef struct node NODE;
NODE *first = NULL;

void insert_front()
{
    int data;
    NODE *new;
    new = malloc(sizeof(NODE));
    printf("\nEnter data : ");
    scanf("%d",&data);
    new->info = data;
    new->llink = NULL;
    new->rlink  =NULL;
    printf("\nElement %d has been inserted into list\n",data);

    if(first == NULL)
    {
        first = new;
        return;
    }
    new->rlink = first;
    first->llink = new;
    first = new;
}

void insert_end()
{
    int data;
    NODE *new  ,*temp = first;
    new = malloc(sizeof(NODE));
    printf("\nEnter data : ");
    scanf("%d",&data);
    new->info = data;
    new->llink = NULL;
    new->rlink  =NULL;
    printf("\nElement %d has been inserted into list\n",data);

    if(first == NULL)
    {
        first = new;
        return;
    }
    while(temp->rlink!=NULL)
    {
        temp = temp->rlink;
    }
    temp->rlink = new;
    new->llink = temp;
}
void delete()
{
    if(first == NULL)
    {
        printf("\nList Empty\n");
        return;
    }
    NODE *temp = first;
    printf("\n%d is deleted form list\n",temp->info);
    first = first->rlink;
    free(temp);
}

void display()
{
    NODE *temp = first;
    if(first == NULL)
    {
        printf("\nList Empty\n");
        return;
    }
    printf("\nList Contents are : \n");
    while(temp!=NULL)
    {
        printf("%d ",temp->info);
        temp = temp->rlink;
    }
    printf("\n");
}

int main()
{
    while(1)
    {
         int ch;
        printf("\nDOUBLE LINKED LIST OPERATIONS");
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
            case 3 : delete();
                    break;
            case 4 : display();
                    break;
            case 5 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    
    }
}
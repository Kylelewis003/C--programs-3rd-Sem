#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *rlink;
    struct node *llink;
};
typedef struct node NODE;
NODE *first = NULL;

void insert()
{
    NODE *new , *temp;
    new = malloc(sizeof(NODE));
    printf("\nEnter element : ");
    scanf("%d",&new->info);
    if(first == NULL)
    {
        first = new;
        new->rlink = first;
        new->llink = first;
    }
    else
    {
        temp = first;
        while(temp->rlink != first)
        {
            temp = temp->rlink;
        }
        temp->rlink = new;
        temp->llink = temp;
        new->rlink = first;
        first->llink = new;
        first = new;
    }
    printf("\nElement %d has been inserted into list\n",new->info);
}

void display()
{
    NODE *temp;
    if(first == NULL)
    {
        printf("\nList Empty\n");
        return;
    }
    temp = first;
    printf("\nList Contents are : \n");
    while(temp->rlink != first)
    {
        printf("%d ",temp->info);
        temp = temp ->rlink;
    }
    printf("%d ",temp->info);
    printf("\n");
    
}

void delete()
{
    NODE *temp;
    if(first == NULL)
    {
        printf("\nList Empty\n");
        return;
    }
    else if(first->rlink == first)
    {
        printf("\n%d is deleted\n",first->info);
        first = NULL;
        free(first);
    }
    else
    {
        temp = first;
        printf("\n%d is deleted\n",temp->info);
        while(temp->rlink != first)
        {
            temp = temp->rlink;
        }
        temp->rlink = first->rlink;
        first = first->rlink;
        first->llink = temp;
    }
}

int main()
{
    while(1)
    {
         int ch;
        printf("\nCIRCULAR DOUBLE LINKED LIST OPERATIONS");
        printf("\n1.Insert Function");
        printf("\n2.Delete Function");
        printf("\n3.Display Function");
        printf("\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insert();
                    break;
            case 2 : delete();
                    break;
            case 3 : display();
                    break;
            case 4 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    
    }
}
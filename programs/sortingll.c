#include<stdio.h>

struct node{
    int info;
    struct node * next;
};
typedef struct node NODE;
NODE * first = NULL;

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

void sort()
{
    NODE *temp , *s;
    int x;
    temp = first;
    while(temp!=NULL)
    {
        s = temp->next;
        while(s!=NULL)
        {
            if(temp->info > s->info)
            {
                x = temp->info;
                temp->info = s->info;
                s->info = x;
            }
            s = s->next;
        }
        temp = temp->next;
    }
}

void main()
{
    int n , i;
    printf("\nEnter the number of nodes  : ");
    scanf("%d",&n);
    for(i = 0 ; i<n ; i++)
    {
        insert_end();
    }
    printf("\nList before sorting is : ");
    display();
    sort();
    printf("\nList after sorting is  : ");
    display();
}
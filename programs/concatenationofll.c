#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node * next;
};
typedef struct node NODE;
NODE * first = NULL;
NODE * sec = NULL;


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
    printf("\nThe Concatenated list is : \n");
    while(temp != NULL)
    {
        printf("%d ",temp->info);
        temp = temp -> next;
    }
    printf("\n");
}

NODE * concat(NODE *first , NODE *sec)
{
    NODE * temp = first;
    if(first == NULL)
    {
        return sec;
    }
    if(sec == NULL)
    {
        return first;
    }
    while(temp->next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = sec;
    return first;
}

void main()
{
    int i,m,n;
    NODE * res;
    printf("Enter the number of nodes for list1 : \n");
    scanf("%d",&m);
    printf("Enter the number of nodes for list2 : \n");
    scanf("%d",&n);
    printf("Enter data for list1 :\n");
    for(i = 0 ; i<m ; i++)
    {
        insert_end();
    }
    printf("\nEnter data for list2 : \n");
    for(i = 0 ; i<n ; i++)
    {
        insert_end();
    }
    res = concat(first,sec);
    display(res);
}
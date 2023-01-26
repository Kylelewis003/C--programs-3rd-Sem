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
    printf("\nEnter element to be pushed : ");
    scanf("%d",&data);
    new -> info = data;
    new -> next  = first;
    first = new;
    printf("\nElement %d has been pushed into stack\n",data);
}

void delete_front()
{
    if(first == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }

    NODE *temp;

    temp = first;
    printf("\n%d is popped from stack\n",temp->info);
    first = first -> next;
    free(temp);
}

void display()
{
    NODE *temp;
    if(first == NULL)
    {
        printf("\nStack Empty\n");
        return;
    }
    temp = first;
    printf("\nStack contents are : \n");
    while(temp != NULL)
    {
        printf("%d\n",temp->info);
        temp = temp -> next;
    }
    printf("\n");
}

void search()  
{  
    NODE *temp;  
    int item,i,flag = 0;  
    temp = first;   
    if(temp == NULL)  
    {  
        printf("\nEmpty List\n");  
        return;
    }  
    else  
    {   
        printf("\nEnter element to be searched for : ");   
        scanf("%d",&item);  
        for(i = 0 ; temp!=NULL ; i++)
        {  
            if(temp->info == item)  
            {  
                flag=1;
                break;
            }  
            temp = temp -> next;  
        }  
        if(flag==1)  
        {  
            printf("\nElement %d found at location %d\n",temp->info,i);  
        }
        else
        {
            printf("\nElement not found\n");
        } 
    }     
          
}  

int main()
{
    while(1)
    {
         int ch;
        printf("\n*******MENU*******");
        printf("\n1.Push Function");
        printf("\n2.Pop Function");
        printf("\n3.Linear Search Function");
        printf("\n4.Display Function");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insert_front();
                    break;
            case 2 : delete_front();
                    break;
            case 3 : search();
                    break;
            case 4 : display();
                    break;
            case 5 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    
    }
}
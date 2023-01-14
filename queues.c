#include<stdio.h>
#define size 4
int i;
int f = -1 , r = -1;
int q[50];

void insert()
{
    int ele;
    if(r == size-1)
    {
        printf("Queue Overflow\n");
        return;
    }
    else
    {
        if(f == -1)
        {
            f = 0;
        }
        r+=1;
        printf("Enter element to be inserted \n");
        scanf("%d",&ele);
        q[r] = ele;
    }
}
void insert_front()
{
    int ele;
    printf("Enter element to be inserted\n");
    scanf("%d",&ele);
    if(f == -1 && r == -1)
    {
        q[++r] = ele;
        f = 0;
        return ;

    }
    if(f!=0)
    {
        f-=1;
        q[f] = ele;
        return ;
    }
    printf("Front insertion is not possible \n");
}
void delete()
{
    if(f>r||f ==-1)
    {
        printf("Queue Underflow\n");
        return;
    }
    else
    {
        printf("%d is deleted from queue\n",q[f]);
        f+=1;
    }
}
void delete_rear()
{   
    int del;
    if(f == -1|| r == -1)
    {
        printf("Queue Underflow\n");
        return;
    }
    else if(f == r)
    {
        del = q[r];
        f = -1;
        r = -1;
        printf("The deleted element is %d",del);
    }
    else
    {
        del = q[r];
        r-=1;
        printf("The deleted element is %d",del);
    }
}
void display()
{
    if(f ==-1||f>r)
    {
        printf("Queue Empty\n");
        return ;
    }
    else
    {
        for(i = f  ;i<=r ; i++)
        {
            printf("%d ",q[i]);
        }
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\nQUEUE OPERATOINS\n");
        printf("\n1.Insert from rear end");
        printf("\n2.Insert from front end");
        printf("\n3.Delete from front end");
        printf("\n4.Delete from rear end");
        printf("\n5.Display");
        printf("\n6.Exit");
        printf("\nEnter a choice : \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: insert_front();
                    break;
            case 3: delete();
                    break;
            case 4: delete_rear;
                    break;
            case 5: display();
                    break;
            case 6: exit(1);
            
        }
    }
}
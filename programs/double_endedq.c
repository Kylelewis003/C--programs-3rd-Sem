#include<stdio.h>
#define size 4
int i;
int f = -1 , r = -1;
int q[20];

void insert_rear()
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
        printf("\nEnter element to be inserted \n");
        scanf("%d",&ele);
        q[r] = ele;
        printf("\nElement %d has been inserted into queue\n",ele);
    }
}
void insert_front()
{
    int ele;
    printf("\nEnter element to be inserted\n");
    scanf("%d",&ele);
    if(f == -1 && r == -1)
    {
        q[++r] = ele;
        f = 0;
        printf("\nElement %d has been inserted into queue\n",ele);
        return ;

    }
    if(f!=0)
    {
        f-=1;
        q[f] = ele;
        printf("\nElement %d has been inserted into queue\n",ele);
        return ;

    }
    printf("\nFront insertion is not possible \n");
}
void delete_front()
{
    if(f>r||f ==-1)
    {
        printf("\nQueue Underflow\n");
        return;
    }
    else
    {
        printf("\nElement %d has been deleted from queue\n",q[f]);
        f+=1;
    }
}
void delete_rear()
{   
    int del;
    if(f == -1|| r == -1)
    {
        printf("\nQueue Underflow\n");
        return;
    }
    else if(f == r)
    {
        del = q[r];
        f = -1;
        r = -1;
        printf("\nElement %d has been deleted from queue\n")
    }
    else
    {
        del = q[r];
        r-=1;
        printf("\nElement %d has been deleted from queue\n")
    }
}
void display()
{
    if(f ==-1||f>r)
    {
        printf("\nQueue Empty\n");
        return ;
    }
    else
    {
        printf("\nQueue Contents are : \n");
        for(i = f  ;i<=r ; i++)
        {
            printf("%d ",q[i]);
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\nDOUBLE ENDED QUEUE OPERATOINS");
        printf("\n1.Insert from rear end");
        printf("\n2.Insert from front end");
        printf("\n3.Delete from front end");
        printf("\n4.Delete from rear end");
        printf("\n5.Display");
        printf("\n6.Exit");
        printf("\nEnter a choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_rear();
                    break;
            case 2: insert_front();
                    break;
            case 3: delete_front();
                    break;
            case 4: delete_rear();
                    break;
            case 5: display();
                    break;
            case 6: exit(1);
            
        }
    }
}
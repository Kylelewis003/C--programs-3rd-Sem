#include<stdio.h>
#define size 4
int i;
int f = -1 , r = -1;
int q[20];

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
        printf("\nElement %d has been inserted into queue\n",ele);
    }
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
        printf("\nElement %d has been deleted form queue\n",q[f]);
        f+=1;
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
        printf("\nQueue Contents are : \n")
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
        printf("\nQUEUE OPERATOINS\n");
        printf("\n1.Insert from rear end");
        printf("\n2.Delete from front end");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter a choice : \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: exit(1);
            
        }
    }
}
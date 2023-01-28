#include<stdio.h>

#define max 5
int q[max] , f = -1 , r = -1;

void insert()
{
    int ele;
    printf("\nEnter the element to be inserted : \n");
    scanf("%d",&ele);
    if(f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        q[r] = ele;
        printf("\nElement %d has been inserted into queue\n",ele);
    }
    else if((r+1)%max == f)
    {
        printf("\nQueue Overflow\n");
        return;
    }
    else
    {
        r = (r+1)%max;
        q[r] = ele;
        printf("\nElement %d has been inserted into queue\n",ele);
    }
}

void delete()
{
    if(f == -1 && r == -1)    
    {
        printf("\nQueue Underfow\n");
        return;
    }
    else if(f == r)
    {
        printf("\nElement %d has been deleted from queue\n",q[f]);
        f = -1;
        r = -1;
    }
    else
    {
        printf("\nElement %d has been deleted from queue\n",q[f]);
        f = (f+1)%max;
    }
}

void display()
{
    int i  = f;
    if(f == -1 && r == -1)
    {
        printf("\nQueue Empty\n");
        return;
    }
    else
    {
        printf("\nQueue Contents are : \n");
        while(i<=r)
        {
            printf("%d ",q[i]);
            i = (i+1)%max;
        }
        printf("\n");
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("\n CIRCULAR QUEUE OPERATOINS\n");
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

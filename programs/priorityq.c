#include<stdio.h>
#define size 3
int f = -1  , r = -1;
int q[size];

void insert()
{
    int j , ele;
    if(r == size-1)
    {
        printf("Priority Queue is Full");
        return ;
    }
    printf("Enter the element : \n");
    scanf("%d",&ele);
    j = r;
    if(f == -1)
    {
        f = 0;
    }
    while(j>=0 && ele<q[j])
    {
        q[j+1] = q[j];
        j--;
    }
    q[j+1] = ele;
    r++;
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
void display()
{
    int i;
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
        printf("\nPRIORITY QUEUE OPERATOINS\n");
        printf("\n1.Insert function");
        printf("\n2.Delete function");
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
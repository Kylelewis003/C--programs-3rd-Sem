#include<stdio.h>
#define max 3
int i , a[max] , top = -1 , ele;

void push()
{
    if(top == max -1)
    {
        printf("\nStack Overflow\n");
        return;
    }
    else
    {
        printf("\nEnter the element to be inserted : ");
        scanf("%d",&ele);
        top++;
        a[top] = ele;
    }
    printf("\nElement %d has been pushed into stack\n",ele);
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack Underfow\n");
        return;
    }
    else
    {
        printf("\nElement %d has been popped from stack\n",a[top]);
        top--;
    }

}

void display()
{
    if(top == -1)
    {
        printf("\nStack Empty\n");
        return;
    }
    else
    {
        printf("\nStack Contents are : \n");
        for(i = top ; i>=0 ; i--)
        {
            printf("%d\n",a[i]);
        }
        printf("\n");
    }
}

int main()
{
    while(1)
    {
        int ch;
        printf("\n*******MENU*******");
        printf("\n1.Push Operation");
        printf("\n2.Pop Operation");
        printf("\n3.Dispalying Stack");
        printf("\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : push();
                    break;
            case 2 : pop();
                    break;
            case 3 : display();
                    break;
            case 4 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    
    }
}
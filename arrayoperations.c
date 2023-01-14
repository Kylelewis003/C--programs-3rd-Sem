#include<stdio.h>
int a[10] , n;

void create()
{
    int i;
    printf("\nEnter the number of array elements  : ");
    scanf("%d",&n);
    printf("\nEnter array elements : \n");
    for(i = 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);

    }
}
void insert()
{
    int num , pos , i;
    printf("\nEnter element to be inserted into array : ");
    scanf("%d",&num);
    printf("\nEnter the position element should ne inserted at : ");
    scanf("%d",&pos);
    if(pos<0||pos>n)
    {
        printf("Invalid Input\n");
        return ;
    }
    else
    {
        for(i = n ; i>pos-1 ; i--)
        {
            a[i] = a[i-1];
        }
        a[pos] = num;
        n++;
    }
}
void delete()
{
    int pos , i;
    printf("\nEnter the position of the element that has to be deleted : ");
    scanf("%d",&pos);
    if(pos<0||pos>n)
    {
        printf("Invalid input\n");
        return ;
    }
    else
    {
        for(i = pos ; i<n-1 ; i++)
        {
            a[i] = a[i+1];
        }
        n--;
    }
    printf("\nElement at position %d has been deleted from array\n",pos);
}
void display()
{
    int i;
    printf("\nThe array elements are : ");
    for(i = 0 ; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    while(1)
    {
        int ch;
        printf("\n*******MENU*******");
        printf("\n1.Array creation");
        printf("\n2.Inserting element into array");
        printf("\n3.Deleting element from array");
        printf("\n4.Dispalying array");
        printf("\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : create();
                    break;
            case 2 : insert();
                    break;
            case 3 : delete();
                    break;
            case 4 : display();
                    break;
            case 5 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    }
}
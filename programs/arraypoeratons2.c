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
        printf("\n2.Dispalying array");
        printf("\n3.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : create();
                    break;
            case 2 : display();
                    break;
            case 3 : exit(1);

            default :
                    printf("\nEnter a valid input\n");
        }
    }
}
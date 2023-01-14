#include<stdio.h>

int main()
{
    char name[10];
    float u, charge ,total;

    printf("Enter the name of customer :\n");
    gets(name);
    printf("\n");
    printf("Enter the units consumed : \n");
    scanf("%f",&u);
    printf("\n");

    if(u<0)
    {
        printf("Invalid input\n");
        return -1;
    }
    else if(u>0 && u<=200)
    {
        charge = u * 0.8;
    }
    else if(u>200 && u<=300)
    {
        charge = (200 * 0.8) + (u - 200) * 0.9;
    }
    else
    {
        charge  =(200 * 0.8)+(300 * 0.9)+(u-400)*1; 
    }

    total = charge + 100;

    if(total>4000)
    {
        total+=(total * 0.15);
    }

    printf("The name of the customer is : %s\n",name);
    printf("The number of units consumed is : %f\n",u);
    printf("The total charge is : %f\n ",total);

    printf("\n");

    
}
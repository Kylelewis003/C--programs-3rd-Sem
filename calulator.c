#include<stdio.h>

int main()
{
    float res , a , b;
    char op;

    printf("Enter number1 : \n");
    scanf("%f",&a);
    printf("Enter number2 : \n");
    scanf("%f",&b);

    printf("Enter the operator : \n");
    scanf(" %c",&op);

    if(op == '+')
    {
        res = a+b;
    }
    else if(op == '-')
    {
        res = a-b;
    }
    else if(op == '*')
    {
        res = a*b;
    }
    else if(op == '/')
    {
        if(b==0)
        {
            printf("Invalid input\n");
            return -1;
        }
        else
        {
            res = a/b;
        }
    }
    else if(op == '%')
    {
        if(b == 0)
        {
            printf("Inavlid input\n");
            return -1;
        }
        else
        {
            res =   (int)a%(int)b;
            
        }
    }
    else
    {
        printf("Invalid input\n");
        return -1;

    }
    
    printf("The result of %f %c %f is : %d\n",a,op,b,res);

    return 0;

}
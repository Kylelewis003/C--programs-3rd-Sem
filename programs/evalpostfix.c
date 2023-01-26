#include<stdio.h>
#include<math.h>
int i , top = -1;
int op1 , op2 , res , s[20];
char postfix[50] , sym;

void push(int item)
{
    s[++top] = item;
}
int pop()
{
    return (s[top--]);
}

void main()
{
    printf("Enter a valid postfix expression :\n");
    scanf("%s",postfix);
    for(i = 0 ; postfix[i]!='\0' ;i++)
    {
        sym = postfix[i];
        if(isdigit(sym))
        {
            push(sym -'0');
        }
        else
        {
            op2 = pop();
            op1 = pop();
            switch(sym)
            {
                case'+': push(op1 + op2);
                        break;
                case'-': push(op1 - op2);
                        break;
                case'*': push(op1 * op2);
                        break;
                case'/': push(op1 / op2);
                        break;
                case'$' :
                case'^': push(pow(op1,op2));
                        break;

            }
        }
    }
    res = pop();
    printf("Result is : %d\n",res);
}
#include<stdio.h>
#include<math.h>

int main()
{
    float sum , term,nume,dino,n,deg;
    int i;

    printf("Enter the degree you want to find sin of : \n");
    scanf("%f",&deg);

    n = deg * (3.14/180.0);

    sum = 0.0;
    nume = n;
    i = 1;
    dino = 1.0;

    do
    {
        term = nume/dino;
        sum+=term;
        i+=2;
        nume = -nume * n * n;
        dino = dino * i * (i-1);    
    } while (fabs(term)>=0.000001);

    printf("The sin of %f using Taylor series is : %f\n",deg,sum);
    printf("The sin of %f using built-in function is : %f\n",deg,sin(n));
    return 0;
    
}
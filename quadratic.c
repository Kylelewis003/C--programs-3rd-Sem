#include<stdio.h>
#include<math.h>

int main()
{
    float r1,r2,a,b,c,d,real,img;

    printf("Enter the coefficients for quadratic equation : \n");
    scanf("%f%f%f",&a,&b,&c);

    if(a==0)
    {
        printf("Invalid input b cannot be equal 0\n");
        printf("Given equation is a linear equation ");
        return -1;
    }

    d = (b*b)-(4*a*c);

    if(d==0)
    {
        printf("The roots are real and equal\n");
        r1 = r2 = (-b)/(2.0*a);
        printf("Root1 = %f\nRoot2 = %f\n",r1,r2);
    }
    else if(d>0)
    {
        printf("The roots are real and unequal\n");
        r1 = (-b +sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/((2*a));
        printf("Root1 = %f\nRoot2 = %f\n",r1,r2);
    }
    else
    {
        printf("The Roots are imaginary\n ");
        real = (-b)/(2.0*a);
        img = sqrt(-d)/(2.0*a);
        printf("Root1 = %f + i %f\n",real,img);
        printf("Root2 = %f - i %f\n",real,img);

    }

    return 0;
}
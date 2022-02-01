#include <stdio.h>

typedef struct _complex
{
    float real;
    float imaginary;
}Complex;

Complex input()
{
    Complex c;
    printf("Enter the real part :");
    scanf("%f",&c.real);
    printf("Enter the imaginary part :");
    scanf("%f",&c.imaginary);
    printf("Complex number is %f+i%f\n",c.real,c.imaginary);
    return c;
}

Complex add(Complex c1,Complex c2)
{
    Complex sum;
    sum.real = c1.real+c2.real;
    sum.imaginary=c1.imaginary+c2.imaginary;
    return sum;
}
void output(Complex c1,Complex c2,Complex sum)
{
 printf("sum of %f+i%f and %f+i%f is %f+i%f",c1.real,c1.imaginary,c2.real,c2.imaginary,sum.real,sum.imaginary);   
}
int main()
{
    
    Complex c1,c2,sum;
    c1=input();
    c2=input();
    sum=add(c1,c2);
    output(c1,c2,sum);
    return 0;
}

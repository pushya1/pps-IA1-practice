//  11. Write a program to find Sum of n complex numbers
#include <stdio.h>

typedef struct _complex
{
    float real;
    float imaginary;
}Complex;

int _n()
{
    int n;
    printf("No.of complex numbers to add:\t");
    scanf("%d",&n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("Enter the real part:");
    scanf("%f",&c.real);
    printf("Enter the imaginary part:");
    scanf("%f",&c.imaginary);
    return c;
    
}

void input_n_complex(int n ,Complex c[n])
{
    for (int i =0;i<n;i++)
    {
        c[i]=input_complex();
    }
        
}

Complex add(Complex a, Complex b)
{
    Complex res;
    res.real=a.real+b.real;
    res.imaginary=a.imaginary+b.imaginary;
    return res;
}
Complex add_n_complex(int n,Complex c[n])
{
    Complex  res;
    res.real= 0;
    res.imaginary=0;
    for (int i=0;i<n;i++)
    {
        res=add(res,c[i]);
    }
    return res;
}
void output(int n,Complex c[n], Complex result)
{
    if(n==1)
    {
      printf("%0.2f + %0.2fi is %0.2f + %0.2fi\n", c[0].real, c[0].imaginary, result.real, result.imaginary);
    } 
    else
    {
      for(int i=0; i<n-1; i++)
      {
        printf("%0.2f + %0.2fi\n", c[i].real, c[i].imaginary);
      }
      printf("+ %0.2f + %0.2fi is\n%0.2f + %0.2fi\n", c[n-1].real, c[n-1].imaginary, result.real, result.imaginary);
    }
}

int main()
{   
    int n=_n();
    Complex c[n],res;
    input_n_complex(n,c);
    res= add_n_complex(n,c);
    output(n,c,res);
    return 0;
}
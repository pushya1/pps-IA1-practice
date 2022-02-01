//5.	Write a program to find Sum of n numbers.
#include<stdio.h>
#include<math.h>

int input()
{   
    int a;
    printf("Enter a number:\t");
    scanf("%d",&a);
    return a;
}

int sum_n(int a)
{
    int sum=0;
    int i;
    for(i = 1; i<=a; ++i)
    {
        sum+=i;
    }
    printf("\nsum of %d numbers is  %d",a,sum);
    
    return 0;
}

int main()
{
    int a,b,c;
    a = input();
    b= sum_n(a);
    return 0;   
}
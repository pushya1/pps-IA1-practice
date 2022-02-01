#include <stdio.h>
int input()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);
    return a;
    
}

int add(int *x, int *y) {
   int sum;
   
   sum = *x + *y;
   
   return sum;
}

void output(int sum)
{
    printf("sum is %d \n",sum);
    
}
 
int main()
{
    int a,b,sum;
    a =input();
    b =input();
    sum = add(&a,&b);
    output(sum);
    return 0;
}
#include <stdio.h>
#include <math.h>


int input_array_size()
{
    int n;
    printf("enter the size of an array:\t ");
    scanf("%d",&n);

    return n;
}
int input_array(int n,int a[n])
{
    for(int i=0;i<n;++i)
    {
        printf("\nenter a  number:\n");
        scanf("%d",&a[i]);

    }

}
int sum_n_arrays(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;++i)
    {
        sum+=a[i];
    }
    return sum;

}
void out_put(int sum)
{   printf("_________________\n");
    printf("%d is the sum of above numbers\n",sum);

}
int main()
{
    int s,total;
    s=input_array_size();
    int ar[s];
    input_array(s,ar);
    total=sum_n_arrays(s,ar);
    out_put(total);
    return 0;
}
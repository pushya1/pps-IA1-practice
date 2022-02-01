#include <stdio.h>

int input()
{
  int a;
  printf("Enter value: ");
  scanf("%d",&a);
  return a;
}

int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else if((b>a)&&(b>c))
  return b;
  else
  return c;
}

int output(int a,int b,int c,int big)
{
  printf("Largest number of %d, %d and %d is: %d\n",a,b,c,big);
}

int main()
{
  int x,y,z,big;
  x=input();
  y=input();
  z=input();
  big=cmp(x,y,z);
  output(x,y,z,big);
  return 0;
}
#include <stdio.h>
float  input()
{
  float a;
  printf("Enter the number\n");
  scanf("%f", &a);
  return a;
}

float de_sqrt(float n)
{
  float x=n;
  for(int i=0;i<6;i++)
  {
    x=(x+n/x)/2;
  }
  return x;
}

void output(float a, float b)
{
  printf("-->Square Root of the number %f is %f", a,b);
}

int main()
{
  float a=input();
  float b=de_sqrt(a);
  output(a,b);
  return 0;
}
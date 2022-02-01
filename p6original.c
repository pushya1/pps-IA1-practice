//sting compare
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input_two_string(char *a,char *b)
{
    printf("Enter the first string:\n");
    scanf("%s",a);
    printf("Enter the second string:\n");
    scanf("%s",b);
    
}


void output(int result)
{
    if(result==0)
    printf("both the strings are same");
    else
    printf("Both are not same strings");
}

int main()
{
    char a[20],b[20];
    
    input_two_string(a,b);
    int result = strcmp(a,b);
    output(result);
}
#include<stdio.h>

int main()
{
int n,digit;
printf("Enter a number :");
scanf("%d",&n);
    for(;n>0;n=n/10)
    {
    digit=n%10;
    
    
    
    
    printf("%d,",digit);
    }
    return 0;
}
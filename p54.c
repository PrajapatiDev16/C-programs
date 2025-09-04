#include<stdio.h>

int main()
{
int n,i;
printf("Enter a number :");
scanf("%d",&n);

    for(;n>0;n=n/10)
    {
    
    i=n%10;
    
    
    
    
    printf("%d",i);
    }
    return 0;
}
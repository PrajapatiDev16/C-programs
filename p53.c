#include<stdio.h>

int main()
{
int n,sum=0,i;
printf("Enter a number :");
scanf("%d",&n);

    for(;n>0;n=n/10)
    {
    
    i=n%10;
    sum+=i;
    
    
    }
    printf("sum of digit is : %d",sum);
    return 0;
}
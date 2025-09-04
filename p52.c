#include<stdio.h>

int main()
{
int n,count=0;
printf("Enter a number :");
scanf("%d",&n);
if(n==0)
    {count=1;}
    for(;n>0;n=n/10)
    {
    
    count++;
    
    
    
    }
    printf("num of digit is : %d",count);
    return 0;
}
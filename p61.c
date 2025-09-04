#include<stdio.h>

int main()
{ 
int n,i,x,sum=0;
for(i=2;i<=100;i++)
{x=1;

for(n=2;n*n<=i;n++)

{
if(i%n==0)
{x=0;
break;}
}
if(x)
sum+=i;
}
printf("sum is : %d",sum);
    return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{
int n,digits=0,p,sum=0,i=0,digit,t,f;
printf("Enter a number :");
scanf("%d",&n);
t=n;
f=n;
for(;t>0;t=t/10)
{
   digits++;}
   
   for(;f>0;f=f/10)
{digit=f%10;
   i=pow(digit,digits);
   sum+=i;}
   if(sum==n)
 {  printf("Num is armstrong ");}
   else
   {printf("Num is not armstrong ");}
   
   
   
    return 0;
}
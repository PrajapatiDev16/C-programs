//Factors of a number 
#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter a num :");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
 
if(n%i==0)
{sum+=i;}

}
if(sum==n )
printf("Number is perfect ");
else 
printf("Number is not perfect");

return 0;




}
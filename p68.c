#include<stdio.h>
int main()
{
int a[9]={500,200,100,50,20,10,5,2,1},i,b=0,n;
printf("Enter a number:");
scanf("%d",&n);
for(i=0;i<9;i++)
{
    b=n/a[i];
    n=n%a[i];
    if(b!=0)
printf("\nRequired no of %d note is :%d",a[i],b);
}
return 0;
}

#include<stdio.h>
int main()
{
int a[5],i;
printf("Enter 5 numbers\n");
for(i=0;i<5;i++)
{scanf("%d",&a[i]);}
printf("reversed array is:\n");
for(i=4;i>=0;i--)
{printf("%d\t",a[i]);}
}
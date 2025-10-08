#include<stdio.h>
int main ()
{
int i,n,k;
printf("Enter number of elements:");
scanf("%d",&n);
int a[n+1];
printf("\nEnter %d numbers:",n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("\nEnter the num to add:");
scanf("%d",&k);
a[n]=k;
n++;
printf("\narray after adding no at the end:");
for(i=0;i<n;i++)
{printf("%d\t",a[i]);}
return 0;

}
#include <stdio.h>
int main()
{
int a[20],i,n;
printf("Enter size of array:");
scanf("%d",&n);
printf("\n Enter %d numbers:",n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
n--;
printf("\nArray with deleted num :");
for(i=0;i<n;i++)
{printf("%d\t",a[i]);}



}

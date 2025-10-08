#include <stdio.h>
int main()
{
int a[20],i,n,m,t;
printf("Enter size of array:");
scanf("%d",&n);
printf("\n Enter %d numbers:",n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("Enter which postion number to be deleted:");
scanf("%d",&m);
for(i=m-1;i<n-1;i++)
{
    a[i]=a[i+1];
    }

n--;
printf("\nArray with deleted num :");
for(i=0;i<n;i++)
{printf("%d\t",a[i]);}



}

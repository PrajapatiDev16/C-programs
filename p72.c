#include<stdio.h>
int main()
{
int a[5],b[10]={0},i;
printf("Enter 5 numbers\n");
for(i=0;i<5;i++)
{scanf("%d",&a[i]);}


for(i=0;i<5;i++)
{
 b[2*i]=a[i];
}
printf("copied array is:\n");
for(i=0;i<10;i++)
{printf("%d\t",b[i]);}





}
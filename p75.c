#include<stdio.h>
int main()
{
int a[10],i,n,d,t,j;
printf("Enter 10 numbers:\n");
for(i=0;i<10;i++)
{scanf("%d",&a[i]);}
printf("Enter how many num to shift:\n(should be less than 10)");
scanf("%d",&n);
printf("\nEnter direction :\n(1 for LEFT,2 for RIGHT)");
scanf("%d",&d);
if(d==1)
{
for(i=0;i<n;i++){
t=a[0];
for(j=0;j<9;j++)
{a[j]=a[j+1];}
a[9]=t;
}}
if(d==2)
{
    for(i=0;i<n;i++){
t=a[9];
for(j=9;j>0;j--){
a[j]=a[j-1];
}
a[0]=t;
    }
}
printf("Shifted array is:");
for(i=0;i<10;i++)
{printf("%d\t",a[i]);}
}
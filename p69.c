#include<stdio.h>
int main()
{
int a[2][2],b[2][2],c[2][2],i,j;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {scanf("%d",&a[i][j]);}
}
printf("Matrix A is :\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {printf("%d\t",a[i][j]);}
    printf("\n");
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {scanf("%d",&b[i][j]);}
}
printf("Matrix B is :\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {printf("%d\t",b[i][j]);}    printf("\n");

}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    c[i][j]=a[i][j]+b[i][j];
}
printf("Sum of Matrix A and B is :\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {printf("%d\t",c[i][j]);}    printf("\n");

}
}

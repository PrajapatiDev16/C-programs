#include<stdio.h>
int main(){
 int i,n,largest,smallest;

    printf("Enter 10 numbers :\n");
scanf("%d",&n);
largest=smallest=n;

    for(i=1;i<10;i++)
    {
      scanf("%d",&n);


if(n>largest)
{
    largest = n;
}
if(n<smallest)
{
    smallest = n;
}
    }
    printf("LArgest num is:%d",largest);
    printf("Smallest num is:%d",smallest);
}

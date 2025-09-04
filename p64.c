#include<stdio.h>

int main()
{
int i,n,previous=0, current=1,next=previous+current;
printf("Enter how many terms ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{printf("%d,",previous);
next=previous+current;
previous = current;
current = next  ;  
}
    return 0;
}
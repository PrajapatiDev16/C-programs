#include <stdio.h>
int main()
{
    int a[5],i,n,f;
    printf("Entaer 5 num:")
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    printf("\nEnter a num to search");
    scanf("%d",&n);
for(i=0;i<5;i++){
if(a[i]==n)
{printf("num was found at position :%d",i+1);
f=1;
break;
}
}
if(f!=1)
{printf("Number was not found");}
}
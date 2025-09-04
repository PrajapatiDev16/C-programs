#include<stdio.h>

int main()
{
int n,count=0,s,t,o;
printf("Enter a number :");
scanf("%d",&n);
o=n;
s=n*n;
    for(;n>0;n=n/10)
    {
    count++;
    }
    t=pow(10,count);
    int lastdig=s%t;
    if(lastdig==o)
    printf("Num is automorphic");
    else
    printf("Num is not automorphic");
  return 0;
  }
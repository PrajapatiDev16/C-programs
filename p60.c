#include<stdio.h>

int main()
{int n,i,x;

for(i=2;i<=500;i++)
{x=1;

for(n=2;n*n<=i;n++)
{if(i%n==0)
{x=0;
break;
}
}if(x)
printf("%d,",i);
}

    return 0;
}
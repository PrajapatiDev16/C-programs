#include<stdio.h>
int main()
{
int a[10],i,j,count=0;
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
{scanf("%d",&a[i]);}
for(i=0;i<1;i++)
{ count=0;
    for(j=0;j<10;j++)
    {
     if(a[j]==a[i])
       {count++;}
    }
    printf("Frequency of %d is :%d\n",a[i],count);

}
for(i=1;i<10;i++)
{ count=0;
    for(j=0;j<10;j++)
    {if(a[i]==a[i-1])
       {break;}
       if(a[j]==a[i])
       {count++;}
    }
    if(count>0)
    printf("Frequency of %d is :%d\n",a[i],count);

}
return 0;
}
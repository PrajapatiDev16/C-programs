#include<stdio.h>
int main(){
 int i,n,b,g;
 b=0;
 g=0;

    printf("Enter sex code 1 for boy 2 for girl :\n");

    for(i=0;i<10;i++)
    {
      scanf("%d",&n);
if(n==1)
{b++;
}
if(n==2)
{
  g++;
}
}
printf("Total of boys are:%d\n",b);
printf("Total of girls are:%d",g);

}

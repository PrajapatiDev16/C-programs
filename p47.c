#include<stdio.h>
int main(){
 int i,positive=0,negative=0,zero=0,n;

    printf("Enter 10 numbers :\n");
 scanf("%d",&n);


    for(i=1;i<10;i++)
    {
      scanf("%d",&n);


if(n>0)
{
    positive++;
}
else if(n<0)
{
    negative++;
}
else {
zero++;

}
    }
printf("Pstive numbers are:%d\n",positive);
printf("Negative numbers are:%d\n",negative);
printf("Zeroes are:%d",zero);

return 0;
}

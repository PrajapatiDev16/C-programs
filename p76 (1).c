#include<stdio.h>
int main (){
int a[20],i,y,j,n;
printf("Enter size of array\n");
scanf("%d",&n);
printf("Enter %d nums:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter a num to add :");
scanf("%d",&y);
for(j=n;j>0;j--){
a[j]=a[j-1];
}
a[0]= y;
    printf("Array after inserting %d at the beginning:\n", y);
    for ( i = 0; i<n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;


}
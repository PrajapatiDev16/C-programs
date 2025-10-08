#include<stdio.h>
int main (){
int a[20],i,y,j,n,p;
printf("Enter size of array :\n");
scanf("%d",&n);
printf("Enter position to insert :\n");
scanf("%d",&p);
printf("Enter %d nums:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter a num to add :");
scanf("%d",&y);
for(j=n;j>=p;j--){
a[j]=a[j-1];
}
a[p-1]= y;
    printf("Array after inserting %d at the beginning:\n", y);
    for ( i = 0; i<n+1; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;


}
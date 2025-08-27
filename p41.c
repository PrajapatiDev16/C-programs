#include <stdio.h>
int main() {
    int i = 1, n;
    printf("Enter n: ");
    scanf("%d", &n);
    do {
        printf("Dev\n");  
        i++;
    } while (i <= n);
    return 0;
}
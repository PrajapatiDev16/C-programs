#include <stdio.h>
int main() {
    int i = 1, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    do {
        sum += (2*i);
        i++;
    } while (i <= n);
    printf("Sum of first %d even numbers = %d\n", n, sum);
    return 0;
}
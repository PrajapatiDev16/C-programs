#include <stdio.h>
int main() {
    int i = 1, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    do {
        sum += (2*i - 1);
        i++;
    } while (i <= n);
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
#include <stdio.h>
int main() {
    int i = 1, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    do {
        sum += i;
        i++;
    } while (i <= n);
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
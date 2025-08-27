#include <stdio.h>
int main() {
    int i = 1, n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        fact *= i;
        i++;
    } while (i <= n);
    printf("Factorial of %d = %d\n", n, fact);
    return 0;
}
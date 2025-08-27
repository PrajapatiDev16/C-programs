#include <stdio.h>
int main() {
    int i = 1, n, val, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    do {
        printf("Enter value %d: ", i);
        scanf("%d", &val);
        sum += val;
        i++;
    } while (i <= n);
    printf("Sum = %d, Mean = %.2f\n", sum, sum/(float)n);
    return 0;
}
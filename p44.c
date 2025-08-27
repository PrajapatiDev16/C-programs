#include <stdio.h>
int main() {
    int i = 1, val, sum = 0;
    do {
        printf("Enter value %d: ", i);
        scanf("%d", &val);
        sum += val;
        i++;
    } while (i <= 10);
    printf("Sum = %d, Mean = %.2f\n", sum, sum/10.0);
    return 0;
}
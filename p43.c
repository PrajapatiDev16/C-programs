#include <stdio.h>
int main() {
    int i = 1, sum = 0;
    do {
        if (i % 13 == 0)
            sum += i;
        i++;
    } while (i <= 100);
    printf("Sum of numbers divisible by 13 (1-100) = %d\n", sum);
    return 0;
}
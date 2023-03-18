/**
 * Determine wether a number is perfect or not
 */

#include <stdio.h>

int main() {
    int sum = 0;
    int n;
    printf("Provide a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i != 0) continue; // i isnt a factor of n
        sum += i;
    }
    if (sum == 2 * n) {
        printf("%d is a perfect number", n);
    } else {
        printf("%d is not a perfect number", n);
    }
    return 0;
}
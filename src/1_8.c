/**
 * Find nPr and nCr (permuation and combination)
*/

#include <stdio.h>

int factorial(int n) {
    int prod = 1;
    for (int i = 1; i <= n; i++) {
        prod *= i;
    }
    return prod;
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Provide value of n: ");
    scanf("%d", &n);
    printf("\nProvide value of r: ");
    scanf("%d", &r);
    int p = permutation(n, r);
    int c = combination(n, r);
    printf("nPr = %d\n", p);
    printf("nCr = %d", c);
    return 0;
}


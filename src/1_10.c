#include <stdio.h>

int walk_num(int n) {
    int sum = 0;
    int init = n;
    do {
        sum += n % 10;
        n /= 10;
    } while (n != 0);
    // if current sum is still not single digit, recursively call function
    if (sum > 10) return walk_num(sum);
    return sum;
}

int main() {
    int n;
    printf("Provide a number: ");
    scanf("%d", &n);
    if (n < 10) {
        // If provided num is single digit, we print it and return early
        printf("%d", n);
        return 0;
    }
    int v = walk_num(n);
    printf("%d", v);
    return 0;
}
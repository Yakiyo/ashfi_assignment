/**
 * Find wether a number is an armstrong number
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Provide a number: ");
    scanf("%d", &n);
    int len;
    if (n == 0) {
        len = 1;
    } else {
        // length of an int: https://stackoverflow.com/a/3068420/17990034
        len = floor(log10(abs(n))) + 1;
    }
    int sum = 0;
    int init = n;
    do {
        int digit = n % 10;
        sum += pow(digit, len);
        n /= 10;
    } while (n != 0);
    if (sum == init) {
        printf("It is an armstrong number");
    } else {
        printf("It is not an armstrong number");
    }
    return 0;
}
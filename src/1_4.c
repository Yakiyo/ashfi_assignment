/**
 * Find wether a number is a Harshad number or not
*/
#include <stdio.h>

int main() {
    int n;
    printf("Provide a number: ");
    scanf("%d", &n);
    int orig = n;
    int sum = 0;
    do {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    } while (n != 0);

    if (orig % sum == 0) {
        printf("It is a harshad number");
    } else {
        printf("It is not a harshad number");
    }
    return 0;
}
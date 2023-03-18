#include <stdio.h>

int main() {
    int n;
    printf("Provide a number: ");
    scanf("%d", &n);
    int reverse = 0;
    int orig = n;
    do {
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    } while (n != 0);
    if (reverse == orig) {
        printf("It is a palindrome number");
    } else {
        printf("It is not a palindrome number");
    }
    return 0;
}
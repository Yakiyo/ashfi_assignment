/**
 * Finding the value of sin(x) with the following algorithm:
 * 
 *   sin(x) = x^1/1! - x^3/3! + x^5/5! - x^7/7! + ..... + Infinity
 * 
 * It can be simplified to:
 * 
 *   sin(x) = Σ ((-1)^n * x^(2 * n + 1) / (2 * n + 1)!)
 * 
 *   where x => 0 to Infinity, n = accuracy (higher -> more precise)
*/

#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int prod = 1;
    for (int i = 1; i <= n; i++) {
        prod *= i;
    }
    return prod;
}

float sine(int deg, int n) {
    float x = deg * 3.14159 / 180; // convert to radians
    float res = x;
    for (int i = 1; i < n; i++) {
        float calc = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        // We keep looping until the result is infinity. Stop right before that.
        if (isinf(res - calc) != 0) break;
        res += calc;
    }
    return res;
}

int main() {
    int x;
    printf("Provide value of x: ");
    scanf("%d", &x);
    int n = 30;

    // In case we want to get n as input too, uncomment it.
    // WARNING: For too high value of n, overflow may occur.
    // printf("Provide value of n: ");
    // scanf("%d", &n);

    int is_negative = 0; // 0 if ans should be positive, 1 if it should be negative

    // Value of sine returns circularly after every 180, for every 180, the sign
    // changes from + to - and vice versa
    if ((x / 180) % 2 != 0) is_negative = 1;
    if (x > 180) x = x % 180;

    float s = sine(x, n);
    printf("%f", s);
    return 0;
}

/**
 * A simpler solution ripped off from the net:
 * https://www.codingconnect.net/c-program-sine-series/ 
 */
// int main() {
//     int n = 30;
//     float x;     
//     printf("Enter the value for x : ");
//     scanf("%f",&x);
     
//     // In case we ever want to take n as input too
//     // printf(" Enter the value for n : ");
//     // scanf("%d",&n);
     
//     x = x * 3.14159 / 180; // convert to radian
//     float t = x;
//     float sum = x;
     
//     /* Loop to calculate the value of sine */
//     for (int i = 1; i <= n; i++) {
//         t = (t * (-1) * x * x) / (2 * i * (2 * i + 1));
//         sum = sum + t;
//     }
     
//     printf("The value of Sin(%f) = %.4f", x, sum);
//     return 0;
// }
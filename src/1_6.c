/**
 * Find all pythagorean triplets upto n
*/
#include <stdio.h>
#include <math.h>

int main() {
    int limit;
    printf("Provide an upper limit: ");
    scanf("%d", &limit);
    for (int a = 1; a < limit; a++) {
        // we start b from a, since anything lower should have already appeared
        // this reduces the number of loops. So we won't see 1, 2, 5 and 2, 1, 5
        // come up twice. They are the same triplets, just arranged differently
        for (int b = a; b < limit; b++) {
            int c = a * a + b * b;
            if (c < limit * limit) {
                c = sqrt(c);
                printf("%d^2 + %d^2 = %d^2\n", a, b, c);
            }
        }
    }
    return 0;
}
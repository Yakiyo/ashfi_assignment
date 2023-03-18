/**
 * Sum upto n-th fibonacci sequence without array
*/
// TODO: Fix vars to long/double. Int will overflow soon enough in the series. Gotta fix it.
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int prev = 0;
    int next = 1;
    printf("Print upper limit: ");
    scanf("%d", &n);
    printf("0 ");
    for (int i = 1; i <= n; i++) {
        printf(" + %d", next);
        sum += next;
        int prev_clone = prev;
        prev = next;
        next += prev_clone;
    }
    printf(" = %d", sum);
    return 0;
}
#include <stdio.h>

int main() {
    double x = 0.1; // initial value of x0
    int n, iterations;

    printf("Enter number of iterations--->");
    scanf("%d", &iterations);

    for (n = 0; n < 6; ++n) {
        x = x * x + 0.16;
        printf("x%d = %lf\n", n + 1, x);
    }

    return 0;
}


#include <stdio.h>

int squareSum(int n) {
    if (n == 0)
        return 0;
    int d = n % 10;
    return squareSum(n / 10) + d * d;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", squareSum(n));
    return 0;
}

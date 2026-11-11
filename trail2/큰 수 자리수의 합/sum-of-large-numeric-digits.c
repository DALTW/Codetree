#include <stdio.h>
int a, b, c;

int digitSum(long long n) {
    if (n == 0)
        return 0;
    return digitSum(n / 10) + n % 10;
}

int main() {
    scanf("%d %d %d", &a, &b, &c);

    long long product = (long long)a * b * c;
    printf("%d\n", digitSum(product));
    return 0;
}

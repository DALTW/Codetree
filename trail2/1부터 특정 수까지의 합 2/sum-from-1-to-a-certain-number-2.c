#include <stdio.h>

int sumTo(int n) {
    if (n == 1)
        return 1;
    return sumTo(n - 1) + n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sumTo(n));
    return 0;
}

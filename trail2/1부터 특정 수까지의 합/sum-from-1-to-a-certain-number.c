#include <stdio.h>

int sumDiv10(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum / 10;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sumDiv10(n));
    return 0;
}

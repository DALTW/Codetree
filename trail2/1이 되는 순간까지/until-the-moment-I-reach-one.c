#include <stdio.h>

int countSteps(int n) {
    if (n == 1)
        return 0;
    if (n % 2 == 0)
        return countSteps(n / 2) + 1;
    return countSteps(n / 3) + 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countSteps(n));
    return 0;
}

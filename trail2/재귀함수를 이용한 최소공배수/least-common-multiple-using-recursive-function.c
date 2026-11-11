#include <stdio.h>
int n;
int arr[11];

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int lcmUpTo(int idx) {
    if (idx == 1)
        return arr[1];
    return lcm(lcmUpTo(idx - 1), arr[idx]);
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", lcmUpTo(n));

    return 0;
}

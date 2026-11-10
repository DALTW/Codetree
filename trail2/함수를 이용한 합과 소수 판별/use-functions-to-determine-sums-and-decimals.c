#include <stdio.h>

int isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int cnt = 0;
    for (int i = a; i <= b; i++)
        if (isPrime(i) && digitSum(i) % 2 == 0)
            cnt++;

    printf("%d\n", cnt);
    return 0;
}

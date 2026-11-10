#include <stdio.h>

int getLcm(int n, int m) {
    int lcm = (n > m) ? n : m;

    while (lcm % n != 0 || lcm % m != 0)
        lcm++;

    return lcm;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", getLcm(n, m));

    return 0;
}

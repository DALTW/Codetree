#include <stdio.h>

int has369(int n) {
    while (n > 0) {
        int d = n % 10;
        if (d == 3 || d == 6 || d == 9)
            return 1;
        n /= 10;
    }
    return 0;
}

int isTarget(int n) {
    return has369(n) || n % 3 == 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int cnt = 0;
    for (int i = a; i <= b; i++)
        if (isTarget(i))
            cnt++;

    printf("%d\n", cnt);
    return 0;
}

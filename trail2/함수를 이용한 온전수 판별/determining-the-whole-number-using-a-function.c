#include <stdio.h>

int isWhole(int n) {
    if (n % 2 == 0)
        return 0;
    if (n % 10 == 5)
        return 0;
    if (n % 3 == 0 && n % 9 != 0)
        return 0;
    return 1;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int cnt = 0;
    for (int i = A; i <= B; i++)
        if (isWhole(i))
            cnt++;

    printf("%d\n", cnt);
    return 0;
}

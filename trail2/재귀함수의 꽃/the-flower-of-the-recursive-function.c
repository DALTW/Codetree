#include <stdio.h>

void flower(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    flower(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);

    flower(n);
    printf("\n");
    return 0;
}

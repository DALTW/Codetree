#include <stdio.h>

void printLine(int k) {
    for (int i = 0; i < k; i++)
        printf("* ");
    printf("\n");
}

void stars(int n) {
    if (n == 0)
        return;
    printLine(n);
    stars(n - 1);
    printLine(n);
}

int main() {
    int n;
    scanf("%d", &n);

    stars(n);

    return 0;
}

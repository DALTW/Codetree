#include <stdio.h>

void printStars(int n) {
    if (n == 0)
        return;
    printStars(n - 1);
    for (int i = 0; i < n; i++)
        printf("*");
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    printStars(n);

    return 0;
}

#include <stdio.h>

void printUp(int n) {
    if (n == 0)
        return;
    printUp(n - 1);
    printf("%d ", n);
}

void printDown(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    printDown(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printUp(n);
    printf("\n");
    printDown(n);
    printf("\n");
    return 0;
}

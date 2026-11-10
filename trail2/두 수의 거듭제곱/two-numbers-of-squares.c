#include <stdio.h>

void printPower(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++)
        result *= a;
    printf("%d\n", result);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printPower(a, b);
    return 0;
}

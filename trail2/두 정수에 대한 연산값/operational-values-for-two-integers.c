#include <stdio.h>

void modify(int *a, int *b) {
    if (*a > *b) {
        *a += 25;
        *b *= 2;
    } else {
        *b += 25;
        *a *= 2;
    }
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    modify(&a, &b);

    printf("%d %d\n", a, b);
    return 0;
}

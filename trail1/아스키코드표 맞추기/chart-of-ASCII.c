#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        int x;
        scanf("%d", &x);
        printf("%c ", (char)x);
    }
    printf("\n");
    return 0;
}

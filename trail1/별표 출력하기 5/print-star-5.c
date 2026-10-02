#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                printf(" ");
            }
            for (int k = 0; k < i; k++) {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
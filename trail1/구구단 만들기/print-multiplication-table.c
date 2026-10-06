#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    for (int j = 1; j <= 9; j++) {
        for (int i = B; i >= A; i -= 2) {
            printf("%d * %d = %d", i, j, i * j);
            
            if (i - 2 >= A) {
                printf(" / ");
            }
        }
        printf("\n"); 
    }

    return 0;
}
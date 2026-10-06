#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int current = 0; 

    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= N; j++) {
                current += 1; 
                printf("%d ", current);
            }
        }
        else {
            for (int j = 1; j <= N; j++) {
                current += 2; 
                printf("%d ", current);
            }
        }
        printf("\n");
    }
    return 0;
}
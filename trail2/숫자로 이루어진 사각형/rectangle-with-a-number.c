#include <stdio.h>

void printSquare(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", num);
            num++;
            if (num == 10)
                num = 1;
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printSquare(N);
    return 0;
}

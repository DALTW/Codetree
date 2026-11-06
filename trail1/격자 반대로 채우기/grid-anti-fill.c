#include <stdio.h>

int main() {
    int n;
    int a[10][10];
    scanf("%d", &n);

    int cnt = 1;
    for (int j = n - 1; j >= 0; j--) {
        if ((n - 1 - j) % 2 == 0) {
            for (int i = n - 1; i >= 0; i--)
                a[i][j] = cnt++;
        } else {
            for (int i = 0; i < n; i++)
                a[i][j] = cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    scanf("%d %d", &n, &m);

    int cnt = 0;
    for (int j = 0; j < m; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < n; i++)
                a[i][j] = cnt++;
        } else {
            for (int i = n - 1; i >= 0; i--)
                a[i][j] = cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

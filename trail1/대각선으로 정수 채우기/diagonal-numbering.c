#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    scanf("%d %d", &n, &m);

    int cnt = 1;
    for (int s = 0; s <= n + m - 2; s++) {
        for (int i = 0; i < n; i++) {
            int j = s - i;
            if (j >= 0 && j < m)
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

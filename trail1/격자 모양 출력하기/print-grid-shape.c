#include <stdio.h>

int main() {
    int n, m;
    int a[11][11] = {0};
    scanf("%d %d", &n, &m);

    for (int k = 0; k < m; k++) {
        int r, c;
        scanf("%d %d", &r, &c);
        a[r][c] = r * c;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

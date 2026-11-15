#include <stdio.h>
#define OFFSET 100
int n;
int x[100], y[100];
int checked[201][201];
int main(void) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < n; i++)
        for (int a = x[i]; a < x[i] + 8; a++)
            for (int b = y[i]; b < y[i] + 8; b++)
                checked[a + OFFSET][b + OFFSET] = 1;

    int area = 0;
    for (int a = 0; a <= 200; a++)
        for (int b = 0; b <= 200; b++)
            area += checked[a][b];

    printf("%d\n", area);
    return 0;
}

#include <stdio.h>
int n;
int x[20], y[20];

// 직선 번호 0~10: x = 번호인 세로선, 11~21: y = 번호-11인 가로선
int on_line(int p, int line) {
    if (line <= 10) return x[p] == line;
    return y[p] == line - 11;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    int ans = 0;
    for (int a = 0; a < 22; a++)
        for (int b = a; b < 22; b++)
            for (int c = b; c < 22; c++) {
                int ok = 1;
                for (int p = 0; p < n; p++) {
                    if (!on_line(p, a) && !on_line(p, b) && !on_line(p, c)) {
                        ok = 0;
                        break;
                    }
                }
                if (ok) ans = 1;
            }
    printf("%d\n", ans);
    return 0;
}

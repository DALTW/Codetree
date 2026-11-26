#include <stdio.h>
int n;
int x[100], y[100];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &x[i], &y[i]);
    
    int ans = n;
    for (int a = 0; a <= 100; a += 2) {        // 세로선 x = a
        for (int b = 0; b <= 100; b += 2) {    // 가로선 y = b
            int cnt[4] = {0};
            for (int i = 0; i < n; i++) {
                if (x[i] > a && y[i] > b) cnt[0]++;
                else if (x[i] < a && y[i] > b) cnt[1]++;
                else if (x[i] < a && y[i] < b) cnt[2]++;
                else cnt[3]++;
            }
            int m = 0;
            for (int k = 0; k < 4; k++)
                if (cnt[k] > m) m = cnt[k];
            if (m < ans) ans = m;
        }
    }
    printf("%d\n", ans);
    return 0;
}

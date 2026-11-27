#include <stdio.h>
int n, m;
int a[101], b[101];
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    
    int ans = 0;
    for (int x = 1; x <= n; x++) {
        for (int y = x + 1; y <= n; y++) {   // 쌍 (x, y) 하나를 정하고
            int cnt = 0;
            for (int i = 0; i < m; i++) {
                if ((a[i] == x && b[i] == y) || (a[i] == y && b[i] == x))
                    cnt++;
            }
            if (cnt > ans) ans = cnt;
        }
    }
    printf("%d\n", ans);
    
    return 0;
}

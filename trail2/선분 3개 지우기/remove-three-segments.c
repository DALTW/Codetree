#include <stdio.h>
int n;
int l[10], r[10];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &l[i], &r[i]);
    }
    
    int cnt = 0;
    // 지울 선분 3개 (a, b, c)를 고름
    for (int a = 0; a < n; a++)
        for (int b = a + 1; b < n; b++)
            for (int c = b + 1; c < n; c++) {
                int ok = 1;
                // 남은 선분끼리 겹치는 쌍이 있는지 확인
                for (int i = 0; i < n && ok; i++) {
                    if (i == a || i == b || i == c) continue;
                    for (int j = i + 1; j < n; j++) {
                        if (j == a || j == b || j == c) continue;
                        // 끝점에서 닿는 경우도 겹침: 두 구간의 공통 부분이 있으면 겹침
                        int left = l[i] > l[j] ? l[i] : l[j];
                        int right = r[i] < r[j] ? r[i] : r[j];
                        if (left <= right) {
                            ok = 0;
                            break;
                        }
                    }
                }
                if (ok) cnt++;
            }

    printf("%d\n", cnt);
    
    return 0;
}

#include <stdio.h>
int n;
int h[100];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }
    int max_cnt = 0;
    for (int s = 0; s <= 1000; s++) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            // 물 위에 있고, 바로 앞 빙산이 없거나 잠겨 있으면 새 덩어리 시작
            if (h[i] > s && (i == 0 || h[i - 1] <= s))
                cnt++;
        }
        if (cnt > max_cnt) max_cnt = cnt;
    }
    printf("%d\n", max_cnt);
    return 0;
}

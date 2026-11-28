#include <stdio.h>
int n;
char seat[101];

// 현재 배치에서 가장 가까운 두 사람의 거리
int min_dist() {
    int prev = -1, res = 1000;
    for (int i = 0; i < n; i++) {
        if (seat[i] == '1') {
            if (prev != -1 && i - prev < res) res = i - prev;
            prev = i;
        }
    }
    return res;
}

int main() {
    scanf("%d", &n);
    scanf("%s", seat);
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (seat[i] != '0') continue;
        for (int j = i + 1; j < n; j++) {
            if (seat[j] != '0') continue;
            seat[i] = seat[j] = '1';     // 두 명 앉혀 보기
            int d = min_dist();
            if (d > ans) ans = d;
            seat[i] = seat[j] = '0';     // 원래대로 되돌리기
        }
    }
    printf("%d\n", ans);
    
    return 0;
}

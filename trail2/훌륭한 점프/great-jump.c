#include <stdio.h>
int n, k;
int arr[101];
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int limit = 1; limit <= 100; limit++) {   // 거쳐 간 돌의 최댓값을 limit 이하로 가정
        if (arr[0] > limit || arr[n - 1] > limit) continue;  // 출발·도착 돌은 반드시 밟음
        int prev = 0, ok = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] <= limit) {                 // 밟을 수 있는 돌
                if (i - prev > k) { ok = 0; break; } // 직전 밟을 수 있는 돌과 너무 멀면 불가능
                prev = i;
            }
        }
        if (ok) {
            printf("%d\n", limit);
            break;
        }
    }
    return 0;
}

#include <stdio.h>
int n, k;
int arr[1000];
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int ans = 0;
    for (int lo = 1; lo <= 10000; lo++) {   // 뽑은 원소의 최솟값을 lo로 가정
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] >= lo && arr[i] <= lo + k) cnt++;
        if (cnt > ans) ans = cnt;
    }
    printf("%d\n", ans);
    
    return 0;
}

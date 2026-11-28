#include <stdio.h>
int n;
int a[1000];
int seq[1000];
int used[1001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
    }
    for (int first = 1; first <= n; first++) {   // 첫 번째 원소를 정하면 나머지가 모두 정해짐
        for (int x = 1; x <= n; x++) used[x] = 0;
        seq[0] = first;
        used[first] = 1;
        int ok = 1;
        for (int i = 1; i < n; i++) {
            seq[i] = a[i - 1] - seq[i - 1];
            if (seq[i] < 1 || seq[i] > n || used[seq[i]]) {  // 범위 밖이거나 중복이면 실패
                ok = 0;
                break;
            }
            used[seq[i]] = 1;
        }
        if (ok) {
            for (int i = 0; i < n; i++) printf("%d ", seq[i]);
            printf("\n");
            break;
        }
    }
    return 0;
}

#include <stdio.h>
#define MAX_N 100
int n, m;
int arr[MAX_N + 1];
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    int max_sum = 0;
    for (int start = 1; start <= n; start++) {
        int pos = start, sum = 0;
        for (int k = 0; k < m; k++) {
            sum += arr[pos];   // 현재 위치의 원소값을 더하고
            pos = arr[pos];    // 그 값을 다음 위치로 이동
        }
        if (sum > max_sum) max_sum = sum;
    }
    printf("%d\n", max_sum);
    return 0;
}

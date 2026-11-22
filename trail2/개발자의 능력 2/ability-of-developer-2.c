#include <stdio.h>
int arr[6];
int main() {
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    
    int total = 0;
    for (int i = 0; i < 6; i++)
        total += arr[i];

    int min_diff = -1;
    // 첫 번째 팀 (i, j), 두 번째 팀 (k, l)을 고르면 나머지 2명이 세 번째 팀
    for (int i = 0; i < 6; i++)
        for (int j = i + 1; j < 6; j++)
            for (int k = 0; k < 6; k++)
                for (int l = k + 1; l < 6; l++) {
                    if (k == i || k == j || l == i || l == j) continue;  // 같은 사람 중복 금지

                    int t1 = arr[i] + arr[j];
                    int t2 = arr[k] + arr[l];
                    int t3 = total - t1 - t2;

                    int max_t = t1, min_t = t1;
                    if (t2 > max_t) max_t = t2;
                    if (t3 > max_t) max_t = t3;
                    if (t2 < min_t) min_t = t2;
                    if (t3 < min_t) min_t = t3;

                    if (min_diff == -1 || max_t - min_t < min_diff)
                        min_diff = max_t - min_t;
                }

    printf("%d\n", min_diff);
    
    return 0;
}

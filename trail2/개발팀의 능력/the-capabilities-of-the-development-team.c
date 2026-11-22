#include <stdio.h>
int arr[5];
int main() {
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int total = 0;
    for (i = 0; i < 5; i++)
        total += arr[i];

    int min_diff = -1;
    // 2명 팀 (a, b), 2명 팀 (c, d)를 고르면 남은 1명이 1명 팀
    for (int a = 0; a < 5; a++)
        for (int b = a + 1; b < 5; b++)
            for (int c = 0; c < 5; c++)
                for (int d = c + 1; d < 5; d++) {
                    if (c == a || c == b || d == a || d == b) continue;

                    int t1 = arr[a] + arr[b];
                    int t2 = arr[c] + arr[d];
                    int t3 = total - t1 - t2;

                    // 모든 팀의 능력치가 서로 달라야 함
                    if (t1 == t2 || t2 == t3 || t1 == t3) continue;

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

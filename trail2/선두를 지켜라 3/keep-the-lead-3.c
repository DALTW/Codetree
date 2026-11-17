#include <stdio.h>
#define MAX_T 1000000
int n, m;
int A_v[1001], A_t[1001];
int B_v[1001], B_t[1001];

long long pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &A_v[i], &A_t[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &B_v[i], &B_t[i]);
    }

    int time_a = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < A_t[i]; j++) {
            pos_a[time_a + 1] = pos_a[time_a] + A_v[i];
            time_a++;
        }

    int time_b = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < B_t[i]; j++) {
            pos_b[time_b + 1] = pos_b[time_b] + B_v[i];
            time_b++;
        }

    // 명예의 전당 조합: 0 = 기록 없음, 1 = A, 2 = B, 3 = A와 B
    int prev = 0, answer = 0;
    for (int t = 1; t <= time_a; t++) {
        int cur;
        if (pos_a[t] > pos_b[t]) cur = 1;
        else if (pos_a[t] < pos_b[t]) cur = 2;
        else cur = 3;

        if (cur != prev) answer++;
        prev = cur;
    }
    printf("%d\n", answer);
    return 0;
}

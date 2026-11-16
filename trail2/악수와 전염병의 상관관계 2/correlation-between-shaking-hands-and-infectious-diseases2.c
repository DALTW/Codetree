#include <stdio.h>
#include <stdlib.h>
int n, k, p, t;
typedef struct {
    int time;
    int person1;
    int person2;
} Shake;
Shake shakes[251];

int infected[101];   // 감염 여부
int remain[101];     // 남은 전염 횟수

int cmp(const void *a, const void *b) {
    return ((Shake *)a)->time - ((Shake *)b)->time;
}

int main() {
    scanf("%d %d %d %d", &n, &k, &p, &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &shakes[i].time, &shakes[i].person1, &shakes[i].person2);
    }
    
    qsort(shakes, t, sizeof(Shake), cmp);

    infected[p] = 1;
    remain[p] = k;

    for (int i = 0; i < t; i++) {
        int a = shakes[i].person1, b = shakes[i].person2;

        // 악수 직전 상태 기준으로 전염 가능 여부 판단
        int can_a = infected[a] && remain[a] > 0;
        int can_b = infected[b] && remain[b] > 0;

        if (can_a) remain[a]--;
        if (can_b) remain[b]--;

        if (can_a && !infected[b]) {
            infected[b] = 1;
            remain[b] = k;
        }
        if (can_b && !infected[a]) {
            infected[a] = 1;
            remain[a] = k;
        }
    }

    for (int i = 1; i <= n; i++)
        printf("%d", infected[i]);
    printf("\n");
    
    return 0;
}

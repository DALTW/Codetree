#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000
int n, b;
int p[MAX_N];
int cost[MAX_N];

int cmp(const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}

int main() {
    scanf("%d %d", &n, &b);
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    
    int answer = 0;
    for (int c = 0; c < n; c++) {          // c번 학생 선물에 쿠폰을 쓴다고 가정
        for (int i = 0; i < n; i++)
            cost[i] = p[i];
        cost[c] /= 2;

        // 싼 선물부터 사야 가장 많은 학생에게 줄 수 있음
        qsort(cost, n, sizeof(int), cmp);

        int sum = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (sum + cost[i] > b) break;
            sum += cost[i];
            cnt++;
        }
        if (cnt > answer)
            answer = cnt;
    }
    printf("%d\n", answer);
    
    return 0;
}

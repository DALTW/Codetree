#include <stdio.h>
#include <stdlib.h>
int n, b;
int p[1000], s[1000];
int cost[1000];

int cmp(const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}

int main() {
    scanf("%d %d", &n, &b);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i], &s[i]);
    }

    int answer = 0;
    for (int c = 0; c < n; c++) {          // c번 학생 선물에 쿠폰을 쓴다고 가정
        // 쿠폰은 선물 가격에만 적용되고 배송비는 그대로
        for (int i = 0; i < n; i++)
            cost[i] = p[i] + s[i];
        cost[c] = p[c] / 2 + s[c];

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

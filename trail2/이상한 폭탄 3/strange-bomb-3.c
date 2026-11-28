#include <stdio.h>
int n, k;
int num[100];
int boom[100];   // i번째 폭탄이 터졌으면 1
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    // 1단계: 같은 정수이면서 거리가 K 이하인 쌍을 찾아 둘 다 표시
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n && j - i <= k; j++)
            if (num[i] == num[j]) boom[i] = boom[j] = 1;
    
    // 2단계: 터진 폭탄의 정수마다 개수를 세서 가장 많은 정수 찾기
    int best_cnt = 0, best_num = 0;
    for (int i = 0; i < n; i++) {
        if (!boom[i]) continue;
        int cnt = 0;
        for (int j = 0; j < n; j++)
            if (boom[j] && num[j] == num[i]) cnt++;
        if (cnt > best_cnt || (cnt == best_cnt && num[i] > best_num)) {
            best_cnt = cnt;
            best_num = num[i];
        }
    }
    printf("%d\n", best_num);
    return 0;
}

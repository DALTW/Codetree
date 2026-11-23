#include <stdio.h>
struct Info1 {
    int p, m, t;
};
struct Info2 {
    int p, t;
};
struct Info1 info1[1000];
struct Info2 info2[50];
int n, m, d, s;
int main() {
    scanf("%d %d %d %d", &n, &m, &d, &s);
    for (int i = 0; i < d; i++) {
        scanf("%d %d %d", &info1[i].p, &info1[i].m, &info1[i].t);
    }
    for (int i = 0; i < s; i++) {
        scanf("%d %d", &info2[i].p, &info2[i].t);
    }
    
    int answer = 0;
    for (int c = 1; c <= m; c++) {        // c번 치즈가 상했다고 가정
        // 1) 아픈 사람 모두가 아프기 전에 c번 치즈를 먹었어야 함
        int possible = 1;
        for (int i = 0; i < s && possible; i++) {
            int ate_before = 0;
            for (int j = 0; j < d; j++)
                if (info1[j].p == info2[i].p && info1[j].m == c && info1[j].t < info2[i].t)
                    ate_before = 1;
            if (!ate_before)
                possible = 0;
        }
        if (!possible) continue;

        // 2) c번 치즈를 한 번이라도 먹은 사람 수 = 필요한 약의 수
        int ate[51] = {0};
        for (int j = 0; j < d; j++)
            if (info1[j].m == c)
                ate[info1[j].p] = 1;

        int cnt = 0;
        for (int p = 1; p <= n; p++)
            cnt += ate[p];
        if (cnt > answer)
            answer = cnt;
    }
    printf("%d\n", answer);
    
    return 0;
}

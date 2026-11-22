#include <stdio.h>
#define MAX_N 10
int n;
int a[MAX_N], b[MAX_N], c[MAX_N];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }

    int answer = 0;
    // A가 생각했을 수 있는 수를 모두 만들어 봄 (1~9, 서로 다른 세 숫자)
    for (int x = 1; x <= 9; x++)
        for (int y = 1; y <= 9; y++)
            for (int z = 1; z <= 9; z++) {
                if (x == y || y == z || x == z) continue;
                int cand[3] = {x, y, z};

                int ok = 1;
                for (int q = 0; q < n && ok; q++) {
                    int guess[3] = {a[q] / 100, a[q] / 10 % 10, a[q] % 10};
                    int strike = 0, ball = 0;   // 1번 카운트, 2번 카운트
                    for (int i = 0; i < 3; i++)
                        for (int j = 0; j < 3; j++)
                            if (guess[i] == cand[j]) {
                                if (i == j) strike++;
                                else ball++;
                            }
                    if (strike != b[q] || ball != c[q])
                        ok = 0;
                }
                if (ok) answer++;
            }

    printf("%d\n", answer);
    return 0;
}

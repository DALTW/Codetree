#include <stdio.h>
int v[15];
int need[161];   // 입력 값별 개수

// (a, b, c, d)로 만든 15개 값이 입력과 같은지 확인
int matches(int a, int b, int c, int d) {
    int s[15] = {a, b, c, d,
                 a + b, b + c, c + d, d + a, a + c, b + d,
                 a + b + c, a + b + d, a + c + d, b + c + d,
                 a + b + c + d};
    int cnt[161] = {0};
    for (int i = 0; i < 15; i++) cnt[s[i]]++;
    for (int x = 0; x <= 160; x++)
        if (cnt[x] != need[x]) return 0;
    return 1;
}

int main() {
    for (int i = 0; i < 15; i++) {
        scanf("%d", &v[i]);
        need[v[i]]++;
    }
    for (int a = 1; a <= 40; a++)
        for (int b = a; b <= 40; b++)
            for (int c = b; c <= 40; c++)
                for (int d = c; d <= 40; d++)
                    if (matches(a, b, c, d)) {
                        printf("%d %d %d %d\n", a, b, c, d);
                        return 0;
                    }
    return 0;
}

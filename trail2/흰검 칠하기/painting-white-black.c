#include <stdio.h>
#define OFFSET 100000
#define MAX_K 200001
int x[1000];
char d[1000];

int white_cnt[MAX_K], black_cnt[MAX_K];
int color[MAX_K];   // 0: 칠해지지 않음, 1: 흰색, 2: 검은색, 3: 회색

void paint(int pos, int c) {
    if (color[pos] == 3) return;
    if (c == 1) white_cnt[pos]++;
    else black_cnt[pos]++;

    if (white_cnt[pos] >= 2 && black_cnt[pos] >= 2)
        color[pos] = 3;
    else
        color[pos] = c;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &x[i], &d[i]);
    }

    int cur = OFFSET;
    for (int i = 0; i < n; i++) {
        if (d[i] == 'R') {
            for (int j = 0; j < x[i]; j++)
                paint(cur + j, 2);
            cur += x[i] - 1;
        } else {
            for (int j = 0; j < x[i]; j++)
                paint(cur - j, 1);
            cur -= x[i] - 1;
        }
    }

    int w = 0, b = 0, g = 0;
    for (int i = 0; i < MAX_K; i++) {
        if (color[i] == 1) w++;
        else if (color[i] == 2) b++;
        else if (color[i] == 3) g++;
    }
    printf("%d %d %d\n", w, b, g);
    return 0;
}

#include <stdio.h>
int n;
char dir[100];
int dist[100];

// 0: 동(E), 1: 남(S), 2: 서(W), 3: 북(N)
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int get_dir(char c) {
    if (c == 'E') return 0;
    if (c == 'S') return 1;
    if (c == 'W') return 2;
    return 3;   // 'N'
}

int main() {
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %c %d", &dir[i], &dist[i]);
    }

    int x = 0, y = 0;
    for (i = 0; i < n; i++) {
        int d = get_dir(dir[i]);
        x += dx[d] * dist[i];
        y += dy[d] * dist[i];
    }
    printf("%d %d\n", x, y);
    return 0;
}

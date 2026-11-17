#include <stdio.h>
int n;
char moves[101];
int dists[101];

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
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &moves[i], &dists[i]);
    }
    
    int x = 0, y = 0, t = 0, answer = -1;
    for (int i = 0; i < n && answer == -1; i++) {
        int d = get_dir(moves[i]);
        for (int j = 0; j < dists[i]; j++) {
            x += dx[d];
            y += dy[d];
            t++;
            if (x == 0 && y == 0) {
                answer = t;
                break;
            }
        }
    }
    printf("%d\n", answer);
    
    return 0;
}

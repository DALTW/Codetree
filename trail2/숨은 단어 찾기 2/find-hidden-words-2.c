#include <stdio.h>
int n, m;
char grid[55][55];

// 여덟 방향
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (grid[i][j] != 'L') continue;
            for (int d = 0; d < 8; d++) {
                int x1 = i + dx[d], y1 = j + dy[d];
                int x2 = i + dx[d] * 2, y2 = j + dy[d] * 2;
                if (in_range(x2, y2) && grid[x1][y1] == 'E' && grid[x2][y2] == 'E')
                    cnt++;
            }
        }

    printf("%d\n", cnt);
    return 0;
}

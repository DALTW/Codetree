#include <stdio.h>
int row[10000];
int col[10000];
int grid[101][101];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &row[i], &col[i]);
    }
    
    for (int i = 0; i < m; i++) {
        int r = row[i], c = col[i];
        grid[r][c] = 1;

        int cnt = 0;
        for (int d = 0; d < 4; d++) {
            int nr = r + dx[d], nc = c + dy[d];
            if (1 <= nr && nr <= n && 1 <= nc && nc <= n && grid[nr][nc] == 1)
                cnt++;
        }
        printf("%d\n", cnt == 3 ? 1 : 0);
    }
    
    return 0;
}

#include <stdio.h>
int n, m;
char arr[100][100];   // 0이면 아직 채우지 않은 칸

// 시계 방향: 오른쪽, 아래, 왼쪽, 위
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int can_go(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m && arr[x][y] == 0;
}

int main() {
    scanf("%d %d", &n, &m);
    
    int x = 0, y = 0, d = 0;
    arr[x][y] = 'A';
    for (int i = 1; i < n * m; i++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (!can_go(nx, ny)) {
            d = (d + 1) % 4;
            nx = x + dx[d];
            ny = y + dy[d];
        }
        x = nx;
        y = ny;
        arr[x][y] = 'A' + i % 26;   // Z 다음은 다시 A
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%c ", arr[i][j]);
        printf("\n");
    }
    
    return 0;
}

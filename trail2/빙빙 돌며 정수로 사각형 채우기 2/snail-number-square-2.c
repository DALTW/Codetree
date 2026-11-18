#include <stdio.h>
int n, m;
int arr[100][100];

// 반시계 방향: 아래, 오른쪽, 위, 왼쪽
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int can_go(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m && arr[x][y] == 0;
}

int main() {
    scanf("%d %d", &n, &m);
    
    int x = 0, y = 0, d = 0;
    arr[x][y] = 1;
    for (int num = 2; num <= n * m; num++) {
        int nx = x + dx[d], ny = y + dy[d];
        if (!can_go(nx, ny)) {
            d = (d + 1) % 4;   // 다음 방향으로 회전
            nx = x + dx[d];
            ny = y + dy[d];
        }
        x = nx;
        y = ny;
        arr[x][y] = num;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    
    return 0;
}

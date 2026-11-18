#include <stdio.h>
 
int n;
char grid[1000][1001];
int start_num;

// 0: 위, 1: 오른쪽, 2: 아래, 3: 왼쪽
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}
 
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", grid[i]);
    scanf("%d", &start_num);
    
    // 시작 칸과 방향 정하기 (시계 방향으로 번호가 붙음)
    int x, y, d;
    int k = start_num;
    if (k <= n) {                 // 위쪽에서 아래로
        x = 0; y = k - 1; d = 2;
    } else if (k <= 2 * n) {      // 오른쪽에서 왼쪽으로
        x = k - n - 1; y = n - 1; d = 3;
    } else if (k <= 3 * n) {      // 아래쪽에서 위로
        x = n - 1; y = n - 1 - (k - 2 * n - 1); d = 0;
    } else {                      // 왼쪽에서 오른쪽으로
        x = n - 1 - (k - 3 * n - 1); y = 0; d = 1;
    }

    int count = 0;
    while (in_range(x, y)) {
        count++;
        if (grid[x][y] == '/')
            d = d ^ 1;    // 위<->오른쪽, 아래<->왼쪽
        else
            d = 3 - d;    // 위<->왼쪽, 아래<->오른쪽
        x += dx[d];
        y += dy[d];
    }
    printf("%d\n", count);
    
    return 0;
}

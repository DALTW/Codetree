#include <stdio.h>
int grid[100][100];

// 오른쪽, 위, 왼쪽, 아래
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

int main() {
    int n;
    scanf("%d", &n);
    
    int x = n / 2, y = n / 2;   // 가운데에서 시작
    int num = 1, d = 0, len = 1;
    grid[x][y] = num;

    // 이동 거리는 1, 1, 2, 2, 3, 3, ... 처럼 두 번마다 1씩 늘어남
    while (num < n * n) {
        for (int rep = 0; rep < 2 && num < n * n; rep++) {
            for (int s = 0; s < len && num < n * n; s++) {
                x += dx[d];
                y += dy[d];
                grid[x][y] = ++num;
            }
            d = (d + 1) % 4;
        }
        len++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", grid[i][j]);
        printf("\n");
    }
    
    return 0;
}

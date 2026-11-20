#include <stdio.h>
int arr[19][19];

// 오른쪽, 아래, 오른쪽 아래 대각선, 오른쪽 위 대각선
int dx[4] = {0, 1, 1, -1};
int dy[4] = {1, 0, 1, 1};

int in_range(int x, int y) {
    return 0 <= x && x < 19 && 0 <= y && y < 19;
}

int main() {
    int i, j;
    for (i = 0; i < 19; i++)
        for (j = 0; j < 19; j++)
            scanf("%d", &arr[i][j]);

    for (i = 0; i < 19; i++)
        for (j = 0; j < 19; j++) {
            if (arr[i][j] == 0) continue;
            for (int d = 0; d < 4; d++) {
                // (i, j)에서 시작해 d 방향으로 같은 색이 5개 이어지는지 확인
                int cnt = 1;
                while (cnt < 5) {
                    int nx = i + dx[d] * cnt, ny = j + dy[d] * cnt;
                    if (!in_range(nx, ny) || arr[nx][ny] != arr[i][j]) break;
                    cnt++;
                }
                if (cnt == 5) {
                    // 가운데 알은 시작점에서 2칸 떨어진 곳 (번호는 1부터)
                    printf("%d\n", arr[i][j]);
                    printf("%d %d\n", i + dx[d] * 2 + 1, j + dy[d] * 2 + 1);
                    return 0;
                }
            }
        }

    printf("0\n");
    return 0;
}

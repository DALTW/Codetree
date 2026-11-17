#include <stdio.h>
int n;
int arr[100][100];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int in_range(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int answer = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            for (int d = 0; d < 4; d++) {
                int nx = i + dx[d], ny = j + dy[d];
                if (in_range(nx, ny) && arr[nx][ny] == 1)
                    cnt++;
            }
            if (cnt >= 3)
                answer++;
        }

    printf("%d\n", answer);
    return 0;
}

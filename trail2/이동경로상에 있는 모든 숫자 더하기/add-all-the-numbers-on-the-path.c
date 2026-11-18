#include <stdio.h>
int n, t;
char commands[100001];
int board[100][100];

// 시계 방향 순서: 0 북, 1 동, 2 남, 3 서 (행이 위로 갈수록 작아짐)
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    scanf("%d %d", &n, &t);
    scanf("%s", commands);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &board[i][j]);

    int x = n / 2, y = n / 2, d = 0;
    long long sum = board[x][y];   // 시작 위치도 더함

    for (int i = 0; commands[i] != '\0'; i++) {
        if (commands[i] == 'L')
            d = (d + 3) % 4;
        else if (commands[i] == 'R')
            d = (d + 1) % 4;
        else {
            int nx = x + dx[d], ny = y + dy[d];
            if (0 <= nx && nx < n && 0 <= ny && ny < n) {   // 격자를 벗어나면 무시
                x = nx;
                y = ny;
                sum += board[x][y];
            }
        }
    }
    printf("%lld\n", sum);
    
    return 0;
}

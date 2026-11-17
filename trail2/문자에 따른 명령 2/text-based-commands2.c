#include <stdio.h>
char cmds[100001];

// 시계 방향 순서: 0 북, 1 동, 2 남, 3 서
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    scanf("%s", cmds);
    
    int x = 0, y = 0, d = 0;   // 북쪽을 보고 시작
    for (int i = 0; cmds[i] != '\0'; i++) {
        if (cmds[i] == 'L')
            d = (d + 3) % 4;   // 왼쪽 90도 = 시계 반대 방향
        else if (cmds[i] == 'R')
            d = (d + 1) % 4;   // 오른쪽 90도 = 시계 방향
        else {
            x += dx[d];
            y += dy[d];
        }
    }
    printf("%d %d\n", x, y);
    
    return 0;
}

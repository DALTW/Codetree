#include <stdio.h>
char commands[100005];

// 시계 방향 순서: 0 북, 1 동, 2 남, 3 서
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    scanf("%s", commands);

    int x = 0, y = 0, d = 0, answer = -1;
    for (int i = 0; commands[i] != '\0'; i++) {
        if (commands[i] == 'L')
            d = (d + 3) % 4;
        else if (commands[i] == 'R')
            d = (d + 1) % 4;
        else {
            x += dx[d];
            y += dy[d];
        }

        // 명령 하나에 1초씩 걸리므로 i번째 명령이 끝나면 i + 1초
        if (x == 0 && y == 0) {
            answer = i + 1;
            break;
        }
    }
    printf("%d\n", answer);
    return 0;
}

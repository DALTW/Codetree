#include <stdio.h>
char inp[3][4];
int board[3][3];

// 세 칸 (a, b, c)로 팀 {p, q}가 이겼는지 확인
int team_wins(int a, int b, int c, int p, int q) {
    int cell[3] = {a, b, c};
    int has_p = 0, has_q = 0;
    for (int k = 0; k < 3; k++) {
        if (cell[k] == p) has_p = 1;
        else if (cell[k] == q) has_q = 1;
        else return 0;              // p, q가 아닌 번호가 섞임
    }
    return has_p && has_q;
}

int main() {
    int i, j;
    
    for (i = 0; i < 3; i++)
        scanf("%s", inp[i]);
    
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            board[i][j] = inp[i][j] - '0';
    
    int ans = 0;
    for (int p = 1; p <= 9; p++) {
        for (int q = p + 1; q <= 9; q++) {
            int win = 0;
            for (i = 0; i < 3; i++) {
                if (team_wins(board[i][0], board[i][1], board[i][2], p, q)) win = 1; // 가로
                if (team_wins(board[0][i], board[1][i], board[2][i], p, q)) win = 1; // 세로
            }
            if (team_wins(board[0][0], board[1][1], board[2][2], p, q)) win = 1;     // 대각선 ↘
            if (team_wins(board[0][2], board[1][1], board[2][0], p, q)) win = 1;     // 대각선 ↙
            if (win) ans++;
        }
    }
    printf("%d\n", ans);
    
    return 0;
}

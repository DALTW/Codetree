#include <stdio.h>
int N, T, R, C;
char D;

// 0: 위(U), 1: 오른쪽(R), 2: 왼쪽(L), 3: 아래(D)
// 이렇게 놓으면 반대 방향은 항상 3 - d
int dr[4] = {-1, 0, 0, 1};
int dc[4] = {0, 1, -1, 0};

int in_range(int r, int c) {
    return 1 <= r && r <= N && 1 <= c && c <= N;
}

int main() {
    scanf("%d %d", &N, &T);
    scanf("%d %d %c", &R, &C, &D);
    
    int d;
    if (D == 'U') d = 0;
    else if (D == 'R') d = 1;
    else if (D == 'L') d = 2;
    else d = 3;

    for (int t = 0; t < T; t++) {
        int nr = R + dr[d], nc = C + dc[d];
        if (in_range(nr, nc)) {
            R = nr;
            C = nc;
        } else {
            d = 3 - d;   // 벽이면 이번 1초는 방향만 바꿈
        }
    }
    printf("%d %d\n", R, C);
    
    return 0;
}

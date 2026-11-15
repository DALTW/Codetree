#include <stdio.h>
#define MAX_N 10
#define OFFSET 100
int x1[MAX_N], y1[MAX_N], x2[MAX_N], y2[MAX_N];
int color[201][201];   // 0: 칠해지지 않음, 1: 빨간색, 2: 파란색
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int c = (i % 2 == 0) ? 1 : 2;
        for (int x = x1[i]; x < x2[i]; x++)
            for (int y = y1[i]; y < y2[i]; y++)
                color[x + OFFSET][y + OFFSET] = c;
    }

    int area = 0;
    for (int x = 0; x <= 200; x++)
        for (int y = 0; y <= 200; y++)
            if (color[x][y] == 2)
                area++;

    printf("%d\n", area);
    
    return 0;
}

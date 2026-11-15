#include <stdio.h>
#define OFFSET 1000
#define MAX_R 2000
int x1[3], y1[3];
int x2[3], y2[3];

int checked[MAX_R + 1][MAX_R + 1];

void paint(int i, int val) {
    for (int x = x1[i]; x < x2[i]; x++)
        for (int y = y1[i]; y < y2[i]; y++)
            checked[x + OFFSET][y + OFFSET] = val;
}

int main(void) {
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
    }
    
    paint(0, 1);   // A
    paint(1, 1);   // B
    paint(2, 0);   // M으로 덮기

    int area = 0;
    for (int x = 0; x <= MAX_R; x++)
        for (int y = 0; y <= MAX_R; y++)
            area += checked[x][y];

    printf("%d\n", area);
    
    return 0;
}

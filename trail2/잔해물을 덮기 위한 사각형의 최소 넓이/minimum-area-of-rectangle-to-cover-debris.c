#include <stdio.h>
#define OFFSET 1000
#define MAX_R 2000

char checked[MAX_R + 1][MAX_R + 1];

int main() {
    int r1_x1, r1_y1, r1_x2, r1_y2;
    int r2_x1, r2_y1, r2_x2, r2_y2;
    
    scanf("%d %d %d %d", &r1_x1, &r1_y1, &r1_x2, &r1_y2);
    scanf("%d %d %d %d", &r2_x1, &r2_y1, &r2_x2, &r2_y2);
    
    for (int x = r1_x1; x < r1_x2; x++)
        for (int y = r1_y1; y < r1_y2; y++)
            checked[x + OFFSET][y + OFFSET] = 1;

    for (int x = r2_x1; x < r2_x2; x++)
        for (int y = r2_y1; y < r2_y2; y++)
            checked[x + OFFSET][y + OFFSET] = 0;

    int min_x = MAX_R, max_x = -1, min_y = MAX_R, max_y = -1;
    for (int x = 0; x <= MAX_R; x++)
        for (int y = 0; y <= MAX_R; y++)
            if (checked[x][y]) {
                if (x < min_x) min_x = x;
                if (x > max_x) max_x = x;
                if (y < min_y) min_y = y;
                if (y > max_y) max_y = y;
            }

    if (max_x == -1)
        printf("0\n");
    else
        printf("%d\n", (max_x - min_x + 1) * (max_y - min_y + 1));
    
    return 0;
}

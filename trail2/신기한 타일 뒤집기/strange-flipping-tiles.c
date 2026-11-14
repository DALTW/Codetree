#include <stdio.h>
#define OFFSET 100000
#define MAX_K 200001

int color[MAX_K];   // 0: 회색(뒤집지 않음), 1: 흰색, 2: 검은색

int main() {
    int n;
    scanf("%d", &n);
    
    int x;
    char c;
    int cur = OFFSET;
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &x, &c);
        if (c == 'L') {
            for (int j = 0; j < x; j++)
                color[cur - j] = 1;
            cur -= x - 1;
        } else {
            for (int j = 0; j < x; j++)
                color[cur + j] = 2;
            cur += x - 1;
        }
    }
    
    int w = 0, b = 0;
    for (int i = 0; i < MAX_K; i++) {
        if (color[i] == 1) w++;
        else if (color[i] == 2) b++;
    }
    printf("%d %d\n", w, b);
    return 0;
}

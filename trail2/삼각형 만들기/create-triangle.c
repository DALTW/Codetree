#include <stdio.h>
#include <stdlib.h>
int n;
int x[100];
int y[100];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    
    int max_area2 = 0;   // 넓이 x 2
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++) {
                // x축에 평행한 변: y가 같은 두 점이 있어야 함
                int has_x_side = (y[i] == y[j] || y[j] == y[k] || y[i] == y[k]);
                // y축에 평행한 변: x가 같은 두 점이 있어야 함
                int has_y_side = (x[i] == x[j] || x[j] == x[k] || x[i] == x[k]);
                if (!has_x_side || !has_y_side) continue;

                // 신발끈 공식으로 넓이의 2배 계산
                int area2 = abs((x[i] * y[j] + x[j] * y[k] + x[k] * y[i])
                              - (x[j] * y[i] + x[k] * y[j] + x[i] * y[k]));
                if (area2 > max_area2)
                    max_area2 = area2;
            }

    printf("%d\n", max_area2);
    
    return 0;
}

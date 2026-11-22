#include <stdio.h>
#include <stdlib.h>
int n, a, b, c, a2, b2, c2;

// 1과 N이 이웃한 원형 다이얼에서 두 수가 거리 2 이내인지
int is_close(int x, int y) {
    int d = abs(x - y);
    if (n - d < d) d = n - d;   // 반대 방향으로 도는 거리가 더 짧을 수 있음
    return d <= 2;
}

int main() {
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &a2, &b2, &c2);
    
    int cnt = 0;
    for (int x = 1; x <= n; x++)
        for (int y = 1; y <= n; y++)
            for (int z = 1; z <= n; z++) {
                int open1 = is_close(x, a) && is_close(y, b) && is_close(z, c);
                int open2 = is_close(x, a2) && is_close(y, b2) && is_close(z, c2);
                if (open1 || open2)
                    cnt++;
            }

    printf("%d\n", cnt);
    
    return 0;
}

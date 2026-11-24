#include <stdio.h>
#define MAX_N 1000
int n, c, g, h;
int ta[MAX_N], tb[MAX_N];
int main() {
    scanf("%d %d %d %d", &n, &c, &g, &h);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &ta[i], &tb[i]);
    }
    
    // 온도가 0 미만이면 -1일 때와, 1000 초과면 1001일 때와 결과가 같음
    int max_work = 0;
    for (int t = -1; t <= 1001; t++) {
        int work = 0;
        for (int i = 0; i < n; i++) {
            if (t < ta[i]) work += c;
            else if (t <= tb[i]) work += g;
            else work += h;
        }
        if (work > max_work)
            max_work = work;
    }
    printf("%d\n", max_work);
    
    return 0;
}

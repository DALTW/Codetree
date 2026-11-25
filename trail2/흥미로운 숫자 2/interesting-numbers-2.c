#include <stdio.h>

int is_interesting(int x) {
    int cnt[10] = {0};
    int len = 0;
    while (x > 0) {
        cnt[x % 10]++;
        x /= 10;
        len++;
    }
    int kinds = 0, has_one = 0;
    for (int d = 0; d < 10; d++) {
        if (cnt[d] > 0) kinds++;
        if (cnt[d] == 1) has_one = 1;
    }
    return kinds == 2 && has_one;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int ans = 0;
    for (int i = x; i <= y; i++)
        if (is_interesting(i)) ans++;
    printf("%d\n", ans);
    return 0;
}

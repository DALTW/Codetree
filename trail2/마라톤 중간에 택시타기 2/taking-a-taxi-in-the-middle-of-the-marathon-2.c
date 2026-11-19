#include <stdio.h>
#include <stdlib.h>
int n;
int x[101], y[101];

int dist(int a, int b) {
    return abs(x[a] - x[b]) + abs(y[a] - y[b]);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &x[i], &y[i]);
    
    int min_total = -1;
    for (int skip = 1; skip < n - 1; skip++) {   // 첫 번째와 마지막은 건너뛰지 않음
        int total = 0, prev = 0;
        for (int i = 1; i < n; i++) {
            if (i == skip) continue;
            total += dist(prev, i);
            prev = i;
        }
        if (min_total == -1 || total < min_total)
            min_total = total;
    }
    printf("%d\n", min_total);
    
    return 0;
}

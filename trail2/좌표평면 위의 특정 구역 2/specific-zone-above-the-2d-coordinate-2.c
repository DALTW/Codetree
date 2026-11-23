#include <stdio.h>

int n;
int x[100];
int y[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    long long min_area = -1;
    for (int skip = 0; skip < n; skip++) {   // skip번째 점을 뺀다고 가정
        int min_x = 40001, max_x = 0, min_y = 40001, max_y = 0;
        for (int i = 0; i < n; i++) {
            if (i == skip) continue;
            if (x[i] < min_x) min_x = x[i];
            if (x[i] > max_x) max_x = x[i];
            if (y[i] < min_y) min_y = y[i];
            if (y[i] > max_y) max_y = y[i];
        }
        long long area = (long long)(max_x - min_x) * (max_y - min_y);
        if (min_area == -1 || area < min_area)
            min_area = area;
    }
    printf("%lld\n", min_area);
    return 0;
}

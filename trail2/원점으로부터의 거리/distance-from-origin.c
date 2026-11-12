#include <stdio.h>
#include <stdlib.h>
int points_x[1000];
int points_y[1000];

typedef struct {
    int dist;
    int num;
} Point;

Point p[1000];

int cmp(const void *a, const void *b) {
    const Point *x = a, *y = b;
    if (x->dist != y->dist) return x->dist - y->dist;
    return x->num - y->num;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points_x[i], &points_y[i]);
    }

    for (int i = 0; i < n; i++) {
        p[i].dist = abs(points_x[i]) + abs(points_y[i]);
        p[i].num = i + 1;
    }

    qsort(p, n, sizeof(Point), cmp);

    for (int i = 0; i < n; i++)
        printf("%d\n", p[i].num);
    return 0;
}

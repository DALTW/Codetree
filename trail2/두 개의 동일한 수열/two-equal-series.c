#include <stdio.h>
#include <stdlib.h>
int n, a[100], b[100];

int cmpAsc(const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    qsort(a, n, sizeof(int), cmpAsc);
    qsort(b, n, sizeof(int), cmpAsc);

    int same = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            same = 0;
            break;
        }
    }

    printf("%s\n", same ? "Yes" : "No");
    return 0;
}

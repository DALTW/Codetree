#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000
int sequence[MAX_N];

typedef struct {
    int value;
    int index;
} Elem;

Elem e[MAX_N];
int answer[MAX_N];

int cmp(const void *a, const void *b) {
    const Elem *x = a, *y = b;
    if (x->value != y->value) return x->value - y->value;
    return x->index - y->index;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence[i]);
    }
    
    for (int i = 0; i < n; i++) {
        e[i].value = sequence[i];
        e[i].index = i;
    }

    qsort(e, n, sizeof(Elem), cmp);

    for (int i = 0; i < n; i++)
        answer[e[i].index] = i + 1;

    for (int i = 0; i < n; i++)
        printf("%d ", answer[i]);
    printf("\n");
    
    return 0;
}

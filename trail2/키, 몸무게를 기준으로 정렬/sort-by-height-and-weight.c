#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char names[10][11];
int heights[10];
int weights[10];

typedef struct {
    char name[11];
    int height;
    int weight;
} Person;

Person p[10];

int cmp(const void *a, const void *b) {
    const Person *x = a, *y = b;
    if (x->height != y->height) return x->height - y->height;
    return y->weight - x->weight;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s %d %d", names[i], &heights[i], &weights[i]);
    }

    for (int i = 0; i < n; i++) {
        strcpy(p[i].name, names[i]);
        p[i].height = heights[i];
        p[i].weight = weights[i];
    }

    qsort(p, n, sizeof(Person), cmp);

    for (int i = 0; i < n; i++)
        printf("%s %d %d\n", p[i].name, p[i].height, p[i].weight);
    return 0;
}

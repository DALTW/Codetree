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
} Student;

Student s[10];

int cmp(const void *a, const void *b) {
    return ((Student *)a)->height - ((Student *)b)->height;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s %d %d", names[i], &heights[i], &weights[i]);
    }

    for (int i = 0; i < n; i++) {
        strcpy(s[i].name, names[i]);
        s[i].height = heights[i];
        s[i].weight = weights[i];
    }

    qsort(s, n, sizeof(Student), cmp);

    for (int i = 0; i < n; i++)
        printf("%s %d %d\n", s[i].name, s[i].height, s[i].weight);
    return 0;
}

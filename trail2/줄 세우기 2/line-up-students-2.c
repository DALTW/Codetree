#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000
typedef struct {
    int height;
    int weight;
    int number;
} Student;
Student students[MAX_N];

int cmp(const void *a, const void *b) {
    const Student *x = a, *y = b;
    if (x->height != y->height) return x->height - y->height;
    return y->weight - x->weight;
}

int main(){
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d %d", &students[i].height, &students[i].weight);
        students[i].number = i + 1;
    }
    
    qsort(students, n, sizeof(Student), cmp);

    for (int i = 0; i < n; i++)
        printf("%d %d %d\n", students[i].height, students[i].weight, students[i].number);
    
    return 0;
}

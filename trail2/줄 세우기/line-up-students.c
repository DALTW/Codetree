#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int height;
    int weight;
    int number;
} Student;
Student students[1000];

int cmp(const void *a, const void *b) {
    const Student *x = a, *y = b;
    if (x->height != y->height) return y->height - x->height;
    if (x->weight != y->weight) return y->weight - x->weight;
    return x->number - y->number;
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

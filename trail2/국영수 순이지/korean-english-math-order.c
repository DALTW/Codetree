#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char names[10][11];
int korean[10], english[10], math[10];

typedef struct {
    char name[11];
    int kor, eng, mat;
} Student;

Student s[10];

int cmp(const void *a, const void *b) {
    const Student *x = a, *y = b;
    if (x->kor != y->kor) return y->kor - x->kor;
    if (x->eng != y->eng) return y->eng - x->eng;
    return y->mat - x->mat;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s %d %d %d", names[i], &korean[i], &english[i], &math[i]);
    }

    for (int i = 0; i < n; i++) {
        strcpy(s[i].name, names[i]);
        s[i].kor = korean[i];
        s[i].eng = english[i];
        s[i].mat = math[i];
    }

    qsort(s, n, sizeof(Student), cmp);

    for (int i = 0; i < n; i++)
        printf("%s %d %d %d\n", s[i].name, s[i].kor, s[i].eng, s[i].mat);
    return 0;
}

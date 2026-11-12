#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    char name[11];
    int height;
    double weight;
};
struct Student data[5];

int cmp_name(const void *a, const void *b) {
    return strcmp(((struct Student *)a)->name, ((struct Student *)b)->name);
}

int cmp_height(const void *a, const void *b) {
    return ((struct Student *)b)->height - ((struct Student *)a)->height;
}

void print_all() {
    for (int i = 0; i < 5; i++)
        printf("%s %d %.1f\n", data[i].name, data[i].height, data[i].weight);
}

int main() {
    int i;
    for(i = 0; i < 5; i++){
        scanf("%s %d %lf", data[i].name, &data[i].height, &data[i].weight);
    }

    qsort(data, 5, sizeof(struct Student), cmp_name);
    printf("name\n");
    print_all();

    printf("\n");

    qsort(data, 5, sizeof(struct Student), cmp_height);
    printf("height\n");
    print_all();
    return 0;
}

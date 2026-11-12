#include <stdio.h>
#include <stdlib.h>
int n;
int arr[100];
int temp[100];

int cmpAsc(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i += 2) {
        int cnt = i + 1;
        for (int j = 0; j < cnt; j++)
            temp[j] = arr[j];

        qsort(temp, cnt, sizeof(int), cmpAsc);
        printf("%d ", temp[cnt / 2]);
    }
    printf("\n");

    return 0;
}

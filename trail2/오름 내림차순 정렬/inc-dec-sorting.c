#include <stdio.h>
#include <stdlib.h>
int n;
int nums[100];

int cmpAsc(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    qsort(nums, n, sizeof(int), cmpAsc);

    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);
    printf("\n");

    for (int i = n - 1; i >= 0; i--)
        printf("%d ", nums[i]);
    printf("\n");

    return 0;
}

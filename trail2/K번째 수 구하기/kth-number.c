#include <stdio.h>
#include <stdlib.h>
int n, k;
int nums[1000];

int cmpAsc(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(){
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    qsort(nums, n, sizeof(int), cmpAsc);

    printf("%d\n", nums[k - 1]);
    return 0;
}

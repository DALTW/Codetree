#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000
int nums[2 * MAX_N];

int cmpAsc(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n; i++){
        scanf("%d", &nums[i]);
    }

    qsort(nums, 2 * n, sizeof(int), cmpAsc);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int pairSum = nums[i] + nums[2 * n - 1 - i];
        if (pairSum > ans)
            ans = pairSum;
    }

    printf("%d\n", ans);
    return 0;
}

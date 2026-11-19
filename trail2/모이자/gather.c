#include <stdio.h>
#include <stdlib.h>
int n;
int a[100];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min_sum = -1;
    for (int k = 0; k < n; k++) {          // k번째 집에 모인다고 가정
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i] * abs(i - k);
        if (min_sum == -1 || sum < min_sum)
            min_sum = sum;
    }
    printf("%d\n", min_sum);
    return 0;
}

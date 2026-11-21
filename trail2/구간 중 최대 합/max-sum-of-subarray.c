#include <stdio.h>
int arr[100];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_sum = 0;
    for (int i = 0; i + k <= n; i++) {     // i부터 시작하는 K개 구간
        int sum = 0;
        for (int j = i; j < i + k; j++)
            sum += arr[j];
        if (sum > max_sum)
            max_sum = sum;
    }
    printf("%d\n", max_sum);
    
    return 0;
}

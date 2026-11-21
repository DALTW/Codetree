#include <stdio.h>
int n, k;
int arr[101];
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int candy, pos;
        scanf("%d %d", &candy, &pos);
        arr[pos] += candy;
    }
    
    // 바구니는 0~100에만 있으므로 c도 0~100만 보면 충분함
    int max_candy = 0;
    for (int c = 0; c <= 100; c++) {
        int sum = 0;
        for (int x = c - k; x <= c + k; x++)
            if (0 <= x && x <= 100)
                sum += arr[x];
        if (sum > max_candy)
            max_candy = sum;
    }
    printf("%d\n", max_candy);
    
    return 0;
}

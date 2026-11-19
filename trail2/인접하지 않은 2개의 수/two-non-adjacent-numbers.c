#include <stdio.h>
#define MAX_N 100
int n;
int a[MAX_N];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max_sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 2; j < n; j++)   // 바로 옆(i + 1)은 건너뜀
            if (a[i] + a[j] > max_sum)
                max_sum = a[i] + a[j];

    printf("%d\n", max_sum);
    
    return 0;
}

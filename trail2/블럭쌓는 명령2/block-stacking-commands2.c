#include <stdio.h>
int n, k;
int a[101], b[101];
int blocks[101];
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    
    for (int i = 1; i <= k; i++)
        for (int j = a[i]; j <= b[i]; j++)
            blocks[j]++;

    int max_val = 0;
    for (int i = 1; i <= n; i++)
        if (blocks[i] > max_val)
            max_val = blocks[i];

    printf("%d\n", max_val);
    
    return 0;
}

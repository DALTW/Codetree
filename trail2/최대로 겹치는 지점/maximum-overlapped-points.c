#include <stdio.h>
int n;
int a[101], b[101];
int cnt[101];
int main() {
    int i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d %d", &a[i], &b[i]);
    
    for (i = 1; i <= n; i++)
        for (int x = a[i]; x <= b[i]; x++)
            cnt[x]++;

    int max_val = 0;
    for (int x = 1; x <= 100; x++)
        if (cnt[x] > max_val)
            max_val = cnt[x];

    printf("%d\n", max_val);
    
    return 0;
}

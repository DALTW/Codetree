#include <stdio.h>
#define OFFSET 100
int n;
int x1[100];
int x2[100];
int cnt[201];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1[i], &x2[i]);
    }
    
    for (int i = 0; i < n; i++)
        for (int x = x1[i]; x < x2[i]; x++)
            cnt[x + OFFSET]++;

    int max_val = 0;
    for (int i = 0; i <= 200; i++)
        if (cnt[i] > max_val)
            max_val = cnt[i];

    printf("%d\n", max_val);
    
    return 0;
}

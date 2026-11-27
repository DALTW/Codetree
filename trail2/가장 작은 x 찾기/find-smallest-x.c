#include <stdio.h>
int n;
int a[10], b[10];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    
    for (int x = 1; x <= 5000; x++) {
        int val = x, ok = 1;
        for (int i = 0; i < n; i++) {
            val *= 2;                          // i번째로 2를 곱한 값
            if (val < a[i] || val > b[i]) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            printf("%d\n", x);
            break;
        }
    }
    
    return 0;
}

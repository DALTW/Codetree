#include <stdio.h>
int n, b;
int main() {
    scanf("%d %d", &n, &b);
    
    int digits[20], cnt = 0;
    while (n > 0) {
        digits[cnt++] = n % b;
        n /= b;
    }
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", digits[i]);
    printf("\n");
    
    return 0;
}

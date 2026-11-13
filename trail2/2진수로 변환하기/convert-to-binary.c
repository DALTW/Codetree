#include <stdio.h>
int n;
int main(void) {
    scanf("%d", &n);

    int digits[20], cnt = 0;
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    while (n > 0) {
        digits[cnt++] = n % 2;
        n /= 2;
    }
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", digits[i]);
    printf("\n");
    return 0;
}

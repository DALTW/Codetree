#include <stdio.h>
char binary[11];
int main() {
    scanf("%s", binary);

    int num = 0;
    for (int i = 0; binary[i] != '\0'; i++)
        num = num * 2 + (binary[i] - '0');

    num *= 17;

    int digits[30], cnt = 0;
    while (num > 0) {
        digits[cnt++] = num % 2;
        num /= 2;
    }
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", digits[i]);
    printf("\n");
    return 0;
}

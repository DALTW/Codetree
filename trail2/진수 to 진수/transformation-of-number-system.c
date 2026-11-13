#include <stdio.h>
int A, B;
char N[10];
int main() {
    scanf("%d %d", &A, &B);
    scanf("%s", N);
    
    int num = 0;
    for (int i = 0; N[i] != '\0'; i++)
        num = num * A + (N[i] - '0');

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    int digits[40], cnt = 0;
    while (num > 0) {
        digits[cnt++] = num % B;
        num /= B;
    }
    for (int i = cnt - 1; i >= 0; i--)
        printf("%d", digits[i]);
    printf("\n");
    
    return 0;
}

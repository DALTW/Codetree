#include <stdio.h>

int main() {
    int n;
    char str[10];
    scanf("%d", &n);

    sprintf(str, "%d", n);

    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
        sum += str[i] - '0';

    printf("%d\n", sum);
    return 0;
}

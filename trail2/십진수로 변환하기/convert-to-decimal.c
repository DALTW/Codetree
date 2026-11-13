#include <stdio.h>
char binary[9];
int main() {
    scanf("%s", binary);

    int num = 0;
    for (int i = 0; binary[i] != '\0'; i++)
        num = num * 2 + (binary[i] - '0');

    printf("%d\n", num);
    return 0;
}

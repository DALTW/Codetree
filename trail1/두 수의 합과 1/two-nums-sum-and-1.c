#include <stdio.h>

int main() {
    int a, b;
    char str[10];
    scanf("%d %d", &a, &b);

    sprintf(str, "%d", a + b);

    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '1')
            cnt++;

    printf("%d\n", cnt);
    return 0;
}

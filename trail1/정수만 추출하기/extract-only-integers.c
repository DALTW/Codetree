#include <stdio.h>
#include <ctype.h>

int toNumber(char s[]) {
    int num = 0;
    for (int i = 0; isdigit(s[i]); i++)
        num = num * 10 + (s[i] - '0');
    return num;
}

int main() {
    char a[10], b[10];
    scanf("%s %s", a, b);

    printf("%d\n", toNumber(a) + toNumber(b));
    return 0;
}

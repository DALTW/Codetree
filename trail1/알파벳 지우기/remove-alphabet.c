#include <stdio.h>
#include <ctype.h>

int digitsOnly(char s[]) {
    int num = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (isdigit(s[i]))
            num = num * 10 + (s[i] - '0');
    return num;
}

int main() {
    char a[10], b[10];
    scanf("%s", a);
    scanf("%s", b);

    printf("%d\n", digitsOnly(a) + digitsOnly(b));
    return 0;
}

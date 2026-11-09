#include <stdio.h>
#include <string.h>

int main() {
    char s[25];
    scanf("%s", s);

    int len = strlen(s);
    char temp = s[0];

    for (int i = 0; i < len - 1; i++)
        s[i] = s[i + 1];
    s[len - 1] = temp;

    printf("%s\n", s);
    return 0;
}

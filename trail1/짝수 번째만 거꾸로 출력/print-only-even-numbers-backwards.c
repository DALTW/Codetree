#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    scanf("%s", s);

    int len = strlen(s);
    int start = (len % 2 == 0) ? len - 1 : len - 2;

    for (int i = start; i >= 1; i -= 2)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}

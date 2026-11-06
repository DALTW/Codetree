#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';

    for (int i = 2; i < 10; i++)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';

    int len = strlen(s);
    s[1] = 'a';
    s[len - 2] = 'a';

    printf("%s\n", s);
    return 0;
}

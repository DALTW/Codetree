#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';

    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (i == 1 || i == len - 2)
            continue;
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}

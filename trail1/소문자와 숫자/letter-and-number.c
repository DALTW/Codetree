#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[105];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i]))
            printf("%c", tolower(s[i]));
        else if (isdigit(s[i]))
            printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}

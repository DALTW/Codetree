#include <stdio.h>
#include <string.h>

int main() {
    char s[105];

    for (int k = 0; k < 2; k++) {
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\r\n")] = '\0';

        for (int i = 0; s[i] != '\0'; i++)
            if (s[i] != ' ')
                printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}

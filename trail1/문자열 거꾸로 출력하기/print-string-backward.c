#include <stdio.h>
#include <string.h>

int main() {
    char s[105];

    while (scanf("%s", s) == 1) {
        if (strcmp(s, "END") == 0)
            break;

        int len = strlen(s);
        for (int i = len - 1; i >= 0; i--)
            printf("%c", s[i]);
        printf("\n");
    }
    return 0;
}

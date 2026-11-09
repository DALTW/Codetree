#include <stdio.h>
#include <string.h>

int main() {
    char s[25];
    scanf("%s", s);

    int len = strlen(s);
    int hasEE = 0, hasAB = 0;

    for (int i = 0; i < len - 1; i++) {
        if (s[i] == 'e' && s[i + 1] == 'e')
            hasEE = 1;
        if (s[i] == 'a' && s[i + 1] == 'b')
            hasAB = 1;
    }

    printf("%s %s\n", hasEE ? "Yes" : "No", hasAB ? "Yes" : "No");
    return 0;
}

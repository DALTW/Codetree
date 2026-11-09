#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == 'e') {
            for (int j = i; j < len; j++)
                s[j] = s[j + 1];
            break;
        }
    }

    printf("%s\n", s);
    return 0;
}

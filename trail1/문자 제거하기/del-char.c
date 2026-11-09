#include <stdio.h>
#include <string.h>

int main() {
    char s[25];
    scanf("%s", s);

    int len = strlen(s);

    while (len > 1) {
        int idx;
        scanf("%d", &idx);
        if (idx >= len)
            idx = len - 1;

        for (int i = idx; i < len - 1; i++)
            s[i] = s[i + 1];
        len--;
        s[len] = '\0';

        printf("%s\n", s);
    }
    return 0;
}

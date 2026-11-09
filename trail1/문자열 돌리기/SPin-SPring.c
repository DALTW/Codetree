#include <stdio.h>
#include <string.h>

int main() {
    char s[15];
    scanf("%s", s);

    int len = strlen(s);
    printf("%s\n", s);

    for (int k = 0; k < len; k++) {
        char temp = s[len - 1];
        for (int i = len - 1; i > 0; i--)
            s[i] = s[i - 1];
        s[0] = temp;

        printf("%s\n", s);
    }
    return 0;
}

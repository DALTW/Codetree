#include <stdio.h>

int main() {
    char s[25];
    char ch;
    scanf("%s %c", s, &ch);

    int pos = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        printf("No\n");
    else
        printf("%d\n", pos);
    return 0;
}

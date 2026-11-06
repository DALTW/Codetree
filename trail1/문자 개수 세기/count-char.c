#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    char ch;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    scanf(" %c", &ch);

    int cnt = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == ch)
            cnt++;

    printf("%d\n", cnt);
    return 0;
}

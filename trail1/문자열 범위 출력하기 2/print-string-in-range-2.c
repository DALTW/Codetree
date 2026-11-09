#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    int k;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    scanf("%d", &k);

    int len = strlen(s);
    if (k > len)
        k = len;

    for (int i = len - 1; i >= len - k; i--)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}

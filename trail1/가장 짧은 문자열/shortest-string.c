#include <stdio.h>
#include <string.h>

int main() {
    char s[3][105];
    int len[3];

    for (int i = 0; i < 3; i++) {
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\r\n")] = '\0';
        len[i] = strlen(s[i]);
    }

    int mx = len[0], mn = len[0];
    for (int i = 1; i < 3; i++) {
        if (len[i] > mx) mx = len[i];
        if (len[i] < mn) mn = len[i];
    }

    printf("%d\n", mx - mn);
    return 0;
}

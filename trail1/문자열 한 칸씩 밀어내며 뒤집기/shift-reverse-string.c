#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    int q;
    scanf("%s %d", s, &q);

    int len = strlen(s);

    for (int k = 0; k < q; k++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            char temp = s[0];
            for (int i = 0; i < len - 1; i++)
                s[i] = s[i + 1];
            s[len - 1] = temp;
        } else if (type == 2) {
            char temp = s[len - 1];
            for (int i = len - 1; i > 0; i--)
                s[i] = s[i - 1];
            s[0] = temp;
        } else {
            for (int i = 0; i < len / 2; i++) {
                char temp = s[i];
                s[i] = s[len - 1 - i];
                s[len - 1 - i] = temp;
            }
        }

        printf("%s\n", s);
    }
    return 0;
}

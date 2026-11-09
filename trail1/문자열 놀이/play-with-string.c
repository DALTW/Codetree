#include <stdio.h>

int main() {
    char s[105];
    int q;
    scanf("%s %d", s, &q);

    for (int k = 0; k < q; k++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            int a, b;
            scanf("%d %d", &a, &b);
            char tmp = s[a - 1];
            s[a - 1] = s[b - 1];
            s[b - 1] = tmp;
        } else {
            char x, y;
            scanf(" %c %c", &x, &y);
            for (int i = 0; s[i] != '\0'; i++)
                if (s[i] == x)
                    s[i] = y;
        }

        printf("%s\n", s);
    }
    return 0;
}

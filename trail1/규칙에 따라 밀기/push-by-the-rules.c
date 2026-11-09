#include <stdio.h>
#include <string.h>

int main() {
    char a[105], cmd[105];
    scanf("%s", a);
    scanf("%s", cmd);

    int len = strlen(a);

    for (int k = 0; cmd[k] != '\0'; k++) {
        if (cmd[k] == 'L') {
            char temp = a[0];
            for (int i = 0; i < len - 1; i++)
                a[i] = a[i + 1];
            a[len - 1] = temp;
        } else {
            char temp = a[len - 1];
            for (int i = len - 1; i > 0; i--)
                a[i] = a[i - 1];
            a[0] = temp;
        }
    }

    printf("%s\n", a);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char a[105], b[105];
    scanf("%s", a);
    scanf("%s", b);

    int len = strlen(a);
    int ans = -1;

    for (int n = 1; n <= len; n++) {
        char temp = a[len - 1];
        for (int i = len - 1; i > 0; i--)
            a[i] = a[i - 1];
        a[0] = temp;

        if (strcmp(a, b) == 0) {
            ans = n;
            break;
        }
    }

    printf("%d\n", ans);
    return 0;
}

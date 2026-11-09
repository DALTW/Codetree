#include <stdio.h>
#include <string.h>

int main() {
    char a[1005];
    char res[3005];
    scanf("%s", a);

    int len = strlen(a);
    int pos = 0;
    int cnt = 1;

    for (int i = 1; i <= len; i++) {
        if (i < len && a[i] == a[i - 1]) {
            cnt++;
        } else {
            pos += sprintf(res + pos, "%c%d", a[i - 1], cnt);
            cnt = 1;
        }
    }

    printf("%d\n%s\n", pos, res);
    return 0;
}

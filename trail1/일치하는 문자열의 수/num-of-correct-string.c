#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[105], s[105];
    scanf("%d %s", &n, a);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        if (strcmp(s, a) == 0)
            cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}

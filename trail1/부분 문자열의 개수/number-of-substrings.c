#include <stdio.h>
#include <string.h>

int main() {
    char a[1005], b[5];
    scanf("%s", a);
    scanf("%s", b);

    int n = strlen(a);
    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
        if (a[i] == b[0] && a[i + 1] == b[1])
            cnt++;

    printf("%d\n", cnt);
    return 0;
}

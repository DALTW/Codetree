#include <stdio.h>
#include <string.h>

int main() {
    char a[105], b[105];
    scanf("%s", a);
    scanf("%s", b);

    int m = strlen(b);

    while (1) {
        int n = strlen(a);
        int pos = -1;

        for (int i = 0; i <= n - m; i++) {
            int same = 1;
            for (int j = 0; j < m; j++) {
                if (a[i + j] != b[j]) {
                    same = 0;
                    break;
                }
            }
            if (same) {
                pos = i;
                break;
            }
        }

        if (pos == -1)
            break;

        for (int i = pos; i + m <= n; i++)
            a[i] = a[i + m];
    }

    printf("%s\n", a);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char s[1005], t[1005];
    scanf("%s", s);
    scanf("%s", t);

    int n = strlen(s);
    int m = strlen(t);
    int ans = -1;

    for (int i = 0; i <= n - m; i++) {
        int same = 1;
        for (int j = 0; j < m; j++) {
            if (s[i + j] != t[j]) {
                same = 0;
                break;
            }
        }
        if (same) {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);
    return 0;
}

#include <stdio.h>
#include <string.h>
char text[1001];
char pattern[1001];

int matchAt(int start) {
    int m = strlen(pattern);
    for (int j = 0; j < m; j++)
        if (text[start + j] != pattern[j])
            return 0;
    return 1;
}

int main() {
    scanf("%s", text);
    scanf("%s", pattern);

    int n = strlen(text);
    int m = strlen(pattern);
    int ans = -1;

    for (int i = 0; i <= n - m; i++) {
        if (matchAt(i)) {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);
    return 0;
}

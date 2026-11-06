#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[10][101];
    scanf("%d", &n);

    int total = 0, cntA = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
        total += strlen(s[i]);
        if (s[i][0] == 'a')
            cntA++;
    }

    printf("%d %d\n", total, cntA);
    return 0;
}

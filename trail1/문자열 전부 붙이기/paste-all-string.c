#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[105];
    char total[1005] = "";
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        strcat(total, s);
    }

    printf("%s\n", total);
    return 0;
}

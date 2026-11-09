#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[105];
    char total[1105] = "";
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        strcat(total, s);
    }

    int len = strlen(total);
    for (int i = 0; i < len; i++) {
        printf("%c", total[i]);
        if (i % 5 == 4 || i == len - 1)
            printf("\n");
    }
    return 0;
}

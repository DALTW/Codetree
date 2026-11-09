#include <stdio.h>
#include <string.h>

int main() {
    char s[25];
    scanf("%s", s);

    int len = strlen(s);
    int cntEE = 0, cntEB = 0;

    for (int i = 0; i < len - 1; i++) {
        if (s[i] == 'e' && s[i + 1] == 'e')
            cntEE++;
        if (s[i] == 'e' && s[i + 1] == 'b')
            cntEB++;
    }

    printf("%d %d\n", cntEE, cntEB);
    return 0;
}

#include <stdio.h>
#include <string.h>

char words[205][205];

int main() {
    int cnt = 0;

    while (scanf("%s", words[cnt]) == 1) {
        if (strcmp(words[cnt], "0") == 0)
            break;
        cnt++;
    }

    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i += 2)
        printf("%s\n", words[i]);
    return 0;
}

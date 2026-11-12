#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n, k;
char T[101];
char words[101][101];
char picked[101][101];

int cmpWord(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    scanf("%d %d %s", &n, &k, T);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    int tlen = strlen(T);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (strncmp(words[i], T, tlen) == 0) {
            strcpy(picked[cnt], words[i]);
            cnt++;
        }
    }

    qsort(picked, cnt, sizeof(picked[0]), cmpWord);

    printf("%s\n", picked[k - 1]);
    return 0;
}

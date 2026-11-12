#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char word_list[101][101];

int cmpWord(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", word_list[i]);
    }

    qsort(word_list, n, sizeof(word_list[0]), cmpWord);

    for (int i = 0; i < n; i++)
        printf("%s\n", word_list[i]);
    return 0;
}

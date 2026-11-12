#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str[101];

int cmpChar(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}

int main() {
    scanf("%s", str);

    qsort(str, strlen(str), sizeof(char), cmpChar);

    printf("%s\n", str);
    return 0;
}

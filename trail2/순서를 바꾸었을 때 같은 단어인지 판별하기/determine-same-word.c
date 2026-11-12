#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str1[100001];
char str2[100001];

int cmpChar(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}

int main() {
    scanf("%100000s", str1);
    scanf("%100000s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("No\n");
        return 0;
    }

    qsort(str1, len1, sizeof(char), cmpChar);
    qsort(str2, len2, sizeof(char), cmpChar);

    if (strcmp(str1, str2) == 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char a[105], b[105];
    char ab[210], ba[210];
    scanf("%s", a);
    scanf("%s", b);

    strcpy(ab, a);
    strcat(ab, b);
    strcpy(ba, b);
    strcat(ba, a);

    if (strcmp(ab, ba) == 0)
        printf("true\n");
    else
        printf("false\n");
    return 0;
}

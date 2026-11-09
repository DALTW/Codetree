#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[10], b[10];
    char ab[20], ba[20];
    scanf("%s %s", a, b);

    strcpy(ab, a);
    strcat(ab, b);
    strcpy(ba, b);
    strcat(ba, a);

    printf("%d\n", atoi(ab) + atoi(ba));
    return 0;
}

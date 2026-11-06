#include <stdio.h>
#include <string.h>

int main() {
    char a[21], b[21];
    scanf("%s %s", a, b);

    int la = strlen(a);
    int lb = strlen(b);

    if (la > lb)
        printf("%s %d\n", a, la);
    else if (lb > la)
        printf("%s %d\n", b, lb);
    else
        printf("same\n");
    return 0;
}

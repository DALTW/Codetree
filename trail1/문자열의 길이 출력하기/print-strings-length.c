#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);

    printf("%d\n", (int)(strlen(a) + strlen(b)));
    return 0;
}

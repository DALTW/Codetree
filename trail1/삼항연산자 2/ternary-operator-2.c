#include <stdio.h>

int main() {
    int a;
    const char *b;
    scanf("%d",&a);

    b = (a == 1) ? "t" : "f";
    printf("%s",b);
    return 0;
}
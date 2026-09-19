#include <stdio.h>

int main() {
    int a;
    const char *n;
    scanf("%d",&a);

    n = a == 100 ? "pass" : "failure";
    printf("%s",n);
    return 0;
}
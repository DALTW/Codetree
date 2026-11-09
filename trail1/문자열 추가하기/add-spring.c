#include <stdio.h>
#include <string.h>

int main() {
    char s[30];
    scanf("%s", s);

    strcat(s, "Hello");
    printf("%s\n", s);
    return 0;
}

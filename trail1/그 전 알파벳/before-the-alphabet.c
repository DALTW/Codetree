#include <stdio.h>

int main() {
    char c;
    scanf(" %c", &c);

    if (c == 'a')
        printf("z\n");
    else
        printf("%c\n", c - 1);
    return 0;
}

#include <stdio.h>

int main() {
    char s[25];
    scanf("%s", s);

    char first = s[0];
    char second = s[1];

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == first)
            s[i] = second;
        else if (s[i] == second)
            s[i] = first;
    }

    printf("%s\n", s);
    return 0;
}

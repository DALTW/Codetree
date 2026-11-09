#include <stdio.h>

int main() {
    char s[105];
    scanf("%s", s);

    char first = s[0];
    char second = s[1];

    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == second)
            s[i] = first;

    printf("%s\n", s);
    return 0;
}

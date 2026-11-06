#include <stdio.h>

int main() {
    char words[10][201];

    for (int i = 0; i < 10; i++)
        scanf("%s", words[i]);

    for (int i = 0; i < 10; i++)
        printf("%s\n", words[i]);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char words[10][201];
    int total = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%s", words[i]);
        total += strlen(words[i]);
    }

    printf("%d\n", total);
    return 0;
}

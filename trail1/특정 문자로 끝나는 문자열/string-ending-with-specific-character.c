#include <stdio.h>
#include <string.h>

int main() {
    char words[10][21];
    char ch;

    for (int i = 0; i < 10; i++)
        scanf("%s", words[i]);
    scanf(" %c", &ch);

    int found = 0;
    for (int i = 0; i < 10; i++) {
        int len = strlen(words[i]);
        if (words[i][len - 1] == ch) {
            printf("%s\n", words[i]);
            found = 1;
        }
    }

    if (!found)
        printf("None\n");
    return 0;
}

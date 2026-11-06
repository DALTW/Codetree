#include <stdio.h>

int main() {
    char words[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    char ch;
    scanf(" %c", &ch);

    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (words[i][2] == ch || words[i][3] == ch) {
            printf("%s\n", words[i]);
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}

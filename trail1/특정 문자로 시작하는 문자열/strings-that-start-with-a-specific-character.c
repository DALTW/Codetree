#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char words[20][21];
    char ch;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", words[i]);
    scanf(" %c", &ch);

    int cnt = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        if (words[i][0] == ch) {
            cnt++;
            sum += strlen(words[i]);
        }
    }

    printf("%d %.2f\n", cnt, (double)sum / cnt);
    return 0;
}

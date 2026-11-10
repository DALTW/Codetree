#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    char str[20];
    sprintf(str, "%d", sum);
    int len = strlen(str);

    char temp = str[0];
    for (int i = 0; i < len - 1; i++)
        str[i] = str[i + 1];
    str[len - 1] = temp;

    printf("%s\n", str);
    return 0;
}

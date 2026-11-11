#include <stdio.h>
#include <string.h>
char A[101];

int isPalindrome(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i])
            return 0;
    return 1;
}

int main() {
    scanf("%s", A);

    if (isPalindrome(A))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

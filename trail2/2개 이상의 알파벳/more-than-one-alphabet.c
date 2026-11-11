#include <stdio.h>
char A[101];

int hasTwoKinds(char *s) {
    for (int i = 1; s[i] != '\0'; i++)
        if (s[i] != s[0])
            return 1;
    return 0;
}

int main() {
    scanf("%s", A);

    if (hasTwoKinds(A))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

#include <stdio.h>
#include <string.h>
char A[101];
int main() {
    scanf("%s", A);

    int len = strlen(A), cnt = 0;
    for (int i = 0; i < len; i++)
        for (int j = i + 1; j < len; j++)
            if (A[i] == '(' && A[j] == ')')
                cnt++;

    printf("%d\n", cnt);
    return 0;
}

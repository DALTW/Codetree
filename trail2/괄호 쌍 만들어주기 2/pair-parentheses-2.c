#include <stdio.h>
#include <string.h>
char A[105];
int main() {
    scanf("%s", A);

    int len = strlen(A), cnt = 0;
    for (int i = 0; i + 1 < len; i++)
        for (int j = i + 2; j + 1 < len; j++)
            if (A[i] == '(' && A[i + 1] == '(' && A[j] == ')' && A[j + 1] == ')')
                cnt++;

    printf("%d\n", cnt);
    return 0;
}

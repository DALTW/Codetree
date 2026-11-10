#include <stdio.h>
int n1, n2;
int a[100], b[100];

int matchAt(int start) {
    for (int j = 0; j < n2; j++)
        if (a[start + j] != b[j])
            return 0;
    return 1;
}

int isSubsequence() {
    for (int i = 0; i <= n1 - n2; i++)
        if (matchAt(i))
            return 1;
    return 0;
}

int main() {
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < n2; j++)
        scanf("%d", &b[j]);

    if (isSubsequence())
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

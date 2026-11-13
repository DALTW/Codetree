#include <stdio.h>
int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int start = 11 * 24 * 60 + 11 * 60 + 11;
    int end = A * 24 * 60 + B * 60 + C;

    if (end < start)
        printf("-1\n");
    else
        printf("%d\n", end - start);
    
    return 0;
}

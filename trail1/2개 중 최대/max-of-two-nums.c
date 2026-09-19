#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    A = A > B ? A : B;
    printf("%d",A);

    return 0;
}
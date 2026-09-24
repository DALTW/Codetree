#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    for(A; A <= B; A+=2)
    {
        printf("%d ",A);
    }
    return 0;
}
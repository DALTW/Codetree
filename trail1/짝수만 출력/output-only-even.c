#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    while(A <= B)
    {
        printf("%d ",A);
        A+=2;
    }
    return 0;
}
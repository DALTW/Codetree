#include <stdio.h>

int main() {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    if(A > B && A < C)
    {
        printf("%d",A);
    }
    else if(A > C && A < B)
    {
        printf("%d",A);
    }
    else if(B > A && B < C)
    {
        printf("%d",B);
    }
    else if(B > C && B < A)
    {
        printf("%d",B);
    }
    else if(C > A && C < B)
    {
        printf("%d",C);
    }
    else
    {
        printf("%d",C);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    if(B > A && B < C)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
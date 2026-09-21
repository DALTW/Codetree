#include <stdio.h>

int main() {
    int A;
    scanf("%d",&A);

    if(A%3 == 0 || A%5 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
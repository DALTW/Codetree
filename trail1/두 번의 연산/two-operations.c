#include <stdio.h>

int main() {
    int A;
    scanf("%d",&A);

    if(A%2!=0)
    {
        A += 3;
    }

    if(A%3==0)
    {
        A/=3;
    }

    printf("%d",A);
    return 0;
}
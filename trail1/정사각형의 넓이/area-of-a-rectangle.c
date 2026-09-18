#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    if(N <5)
    {
        printf("%d\ntiny",N*N);
    }
    else
    {
        printf("%d",N*N);
    }
    return 0;
}
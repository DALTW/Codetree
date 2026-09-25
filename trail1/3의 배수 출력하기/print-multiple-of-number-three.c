#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int i = 3;
    int j = 1;

    while(i*j <= N)
    {
        printf("%d ",i*j);
        j++;
    }
    return 0;
}
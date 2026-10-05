#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d ",11+(j*2)+(i*2));
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int N,M;

    scanf("%d %d",&N,&M);

    int arr[N][M];

    int sum = 1;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            arr[i][j] = sum;
            sum++;
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
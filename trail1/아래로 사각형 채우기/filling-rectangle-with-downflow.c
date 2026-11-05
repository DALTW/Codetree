#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int arr[N][N];

    int num = 1;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            arr[j][i] = num;
            num++;
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
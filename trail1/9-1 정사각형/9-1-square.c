#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int num = 1;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int sum = 9 - (num - 1) % 9;
            printf("%d",sum);
            num++;
        }
        printf("\n");
    }
    return 0;
}
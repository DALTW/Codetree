#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= N; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(int i = N; i > 1; i--)
    {
        for(int j = i; j > 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
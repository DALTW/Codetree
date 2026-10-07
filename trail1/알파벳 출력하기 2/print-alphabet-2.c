#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int count = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for(int j = N-i; j >= 1; j--)
        {
            printf("%c ", 65+(count%26));
            count++;
        }
        printf("\n");
    }
    return 0;
}
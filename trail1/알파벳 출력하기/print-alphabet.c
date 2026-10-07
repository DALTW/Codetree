#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    char count = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", 'A' + (count % 26));
            count++;
        }
        printf("\n");
    }
    return 0;
}
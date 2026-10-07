#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%c",65+j+(N*i));
        }
        printf("\n");
    }
    return 0;
}
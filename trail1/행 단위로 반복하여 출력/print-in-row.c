#include <stdio.h>

int main() {
    int N; 
    scanf("%d",&N);

    for(int i = 0; i < N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
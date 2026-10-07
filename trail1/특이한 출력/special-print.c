#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            printf("(%d, %d) ",i,j);
            if((i+j) % 4 ==0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
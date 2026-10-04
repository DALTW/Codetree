#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= N; i++)
    {
        if(i == 1)
        {
            for(int j = 0; j < N; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for(int j = 1; j <= N; j++)
            {
                if(j%2==0 && i<=j)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
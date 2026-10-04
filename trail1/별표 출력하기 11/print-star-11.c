#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= 2*N+1; i++)
    {
        if(i%2!=0)
        {
            for(int j = 0; j < 2*N+1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else 
        {
            for(int j = 0; j < N+1; j++)
            {
                printf("*   ");
            }
            printf("\n");
        }
    }
    return 0;
}
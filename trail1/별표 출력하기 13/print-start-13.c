#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = 0; i < N*2; i++)
    {
        if(i%2==0)
        {
            for(int j = 0; j < N - (i/2); j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for(int j = 0; j < i/2+1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }
    return 0;
}
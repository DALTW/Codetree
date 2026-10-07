#include <stdio.h>

int main() {
    int M;
    scanf("%d",&M);
    
    int N[M];
    for(int i = 0; i < M; i++)
    {
        scanf("%d",&N[i]);
    }

    for(int i = 0; i < M; i++)
    {
        int count = 0;

        for(int j = N[i]; j > 1; j = (j % 2 == 0) ? (j / 2) : (j * 3 + 1))
        {
            count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
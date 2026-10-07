#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N - i + 1; j++)
        {
            printf("%d * %d = %d",i,j,i*j);

            if(j==N-i+1)
            {
                printf("\n");
            }
            else
            {
                printf(" / ");
            }
        }
    }
    return 0;
}
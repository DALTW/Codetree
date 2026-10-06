#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int count = 0;
    int k = 1;

    for(int i = 0; i < N; i++)
    {
        
        for(int j = 0; j <= i; j++)
        {
            printf("%d ",k+count);
            count++;
        }
        
        printf("\n");
    }
    return 0;
}
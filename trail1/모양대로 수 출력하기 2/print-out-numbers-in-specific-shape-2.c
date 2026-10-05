#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int Num = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int sum = (Num%8 + 2);
            printf("%d ",sum);
            Num+=2;
        }
        printf("\n");
    }
    return 0;
}
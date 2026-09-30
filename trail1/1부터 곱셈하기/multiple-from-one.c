#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int sum = 1;

    for(int i = 1; i <= N; i++)
    {
        sum*=i;

        if(sum>=N)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
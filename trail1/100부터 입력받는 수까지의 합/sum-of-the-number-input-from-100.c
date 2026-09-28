#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int sum = 0;

    for(int i = N; i <= 100; i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
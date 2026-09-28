#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int sum = 0;

    for(int i = 1; i < N; i++)
    {
        if(N%i==0)
        {
            sum+=i;
        }
    }
    
    if(N == sum)
    {
        printf("P");
    }
    else
    {
        printf("N");
    }
    return 0;
}
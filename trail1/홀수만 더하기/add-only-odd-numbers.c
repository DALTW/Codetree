#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int n[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&n[i]);
    }

    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        if(n[i]%3==0 && n[i]%2!=0)
        {
            sum+=n[i];
        }
    }
    printf("%d",sum);
    return 0;
}
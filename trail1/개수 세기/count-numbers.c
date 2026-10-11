#include <stdio.h>

int main() {
    int N,M;
    scanf("%d %d",&N,&M);

    int a[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int count = 0;

    for(int i = 0; i < N; i++)
    {
        if(a[i] == M)
        {
            count++;
        }
    }

    printf("%d",count);
    return 0;
}
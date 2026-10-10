#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int a[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d ",a[i]*a[i]);
    }
    return 0;
}